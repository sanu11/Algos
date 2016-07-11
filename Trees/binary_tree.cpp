#include<bits/stdc++.h>
using namespace std;
class node
{
	int data;
	node *left;
	node *right;
	public:
		static void insert(int x);
		static void delet (int x);
		static void search(int x);
		static void print();
		static  bool  sum(node*,int,int);
		// static int height(node*);
		// static void sum(node*,int);
		static int height(node *);
}*root;

class qnode
{
	node *data;
	qnode *np;
	public:
		static void enqueue(node*);
		static node* peek();
		static void dequeue();

}*front,*rear,*front1,*rear1;

void qnode::enqueue(node *x)
{
	qnode *q=new qnode;
	q->data=x;
	q->np=NULL;
	if(front==NULL)
	{
		front=q;
		rear=q;
	}
	else
	{
		rear->np=q;
		rear=q;
	}

}

int node::height(node *p)
{
	if(p==NULL)
		return 0;
	return 1+ max(height(p->left),height(p->right));

}
node* qnode::peek()
{
	qnode *p=front;
	return p->data;
}

void qnode::dequeue()
{
	front=front->np;
}

void node::insert(int x)
{
	node *q=new node;
	q->data=x;
	q->left=NULL;
	q->right=NULL;
	qnode::enqueue(q);        //enqueue to queue
	
	if(root==NULL)
		root=q;
		
	else
	{
		node *p= qnode::peek();   //get front
		if(p->left==NULL)          //assign to its left
			p->left=q;

		else 					//assign to its right
		{
			p->right=q;
			qnode::dequeue();    //dequeue it from queue;
		}
	}
}

bool node::sum(node* p,int add,int value)
{

	if(p==NULL)
		return false;
	add+=p->data;
	// cout<<add<<" "<<value<<endl;
	if(add==value)
		return true;
	return sum(p->left,add,value)||sum(p->right,add,value)||sum(p->left,0,value)||sum(p->right,0,value);

}

void node::print()
{
	front=NULL;
	rear=NULL;
	if(root==NULL)
		return;
		
	else
	{
		cout<<root->data<<" ";
		qnode::enqueue(root);
		while(1)
		{
			node *p=qnode::peek();
			qnode::dequeue();
			if(p->left!=NULL)
			{	
				cout<<p->left->data<<" ";
				qnode::enqueue(p->left);
			}
			if(p->right!=NULL)
			{	
				cout<<p->right->data<<" ";
				qnode::enqueue(p->right);
			}
			if(front==rear)
				break;
		}
		cout<<endl;
	}

}

// int node::height(node *p)
// {

// 	if(p==NULL)
// 		return;
// 	return 1 + max(height(p->left),height(p->right));

// }

int main()
{
	root=NULL;
	front=NULL;
	rear=NULL;
	
	int value,x,n,flag=0;
	while(1)
	{
		cout<<"1.Insert\n2.Print\n3.Height\n4.Check for value\n5.Exit\n";
		cin>>n;
		switch(n)
		{

			case 1:
				cin>>x;
				node::insert(x);
				break;
			case 2:
				node::print();
				break;
			case 3:
				cout<<node::height(root)<<endl;
				break;
			case 4:
				cin>>value;
				if(node::sum(root,0,value))
					cout<<"YES\n";
				else
					cout<<"NO\n";
				break;
			case 5:
				flag=1;
				break;
			default:
				cout<<"Enter correct choice\n";
				break;
		}
		if(flag)
			break;
	}

}