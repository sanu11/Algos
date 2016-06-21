#include<bits/stdc++.h>
using namespace std;
class node
{
	int data;
	node *left;
	node *right;
	public:
		static void insert(node* ,int);
		static node* find(node*,int);
		static void delet(int x);
		static int  search(node*,int);
		static void inorder(node*);
		static void preorder(node*);
		static void postorder(node*);
		
}*root;


void node::insert(node *p , int x)
{

	node *q=new node;
	q->data=x;
	q->left=NULL;
	q->right=NULL;
	if(root==NULL)
		root=q;	

	else
	{
	
		if(x==p->data)
		{
			cout<<"Already Exists\n";
			return ;
		}	
		if(x<p->data)
			if(p->left==NULL)
				p->left=q;
			else
				insert(p->left,x);
		else 
			if(p->right==NULL)
				p->right=q;
			else
				insert(p->right,x);
	}

}

int node::search(node *p,int x)
{

	if(x==p->data)
	{
		cout<<"Found\n";
		cout<<p->data<<endl;
		return 1;
	}

	else if(x<p->data&&p->left!=NULL)
			search(p->left,x);

	else if(p->right!=NULL)
			search(p->right,x);

}

void node::inorder(node *p)
{

	if(p->left!=NULL)
		inorder(p->left);

	cout<<p->data<<" ";

	if(p->right!=NULL)
		inorder(p->right);

}

void node::preorder(node *p)
{

	cout<<p->data<<" ";

	if(p->left!=NULL)
		preorder(p->left);

	if(p->right!=NULL)
		preorder(p->right);

}

void node::postorder(node *p)
{
	if(p->left!=NULL)
		postorder(p->left);

	if(p->right!=NULL)
		postorder(p->right);

	cout<<p->data<<" ";

}

node* node::find(node *p,int x)
{

	if(root!=NULL&&x==root->data)
		return root;
	if(p->left!=NULL&&x==p->left->data)
		return p;
	else if(p->right!=NULL&&x==p->right->data)
		return p;
	else if(p->left!=NULL&&x<p->data)
		find(p->left,x);
	else  if(p->right!=NULL&&x>p->data)
		find(p->right,x);

}

void node::delet(int x)
{	
	int flag=0;
	node *p=find(root,x);
	node*q;
	if(p!=NULL)
	{
		if(x==p->data)
			q=p;

		else if(p->left!=NULL&&x==p->left->data)
		{
			q=p->left;
			flag=1;
		}

		else if(p->right!=NULL&&x==p->right->data)
		{
			q=p->right;
			flag=2;
		
		}

		else
			cout<<"Not Found\n";
	}
	else
		cout<<"Not Found\n";
	if(q!=root)
	{

		if(q->right==NULL)						  //if right child is null shift left child up
		{
		
			if(flag==1)
				p->left=q->left;
		
			else
				p->right=q->left;
	
			delete q;
	
		}

		else if(q->left==NULL)                    //if left child is null shift right child up
		{
	
			if(flag==1)
				p->left=q->right;
				
			else
				p->right=q->right;
	
			delete q;
	
		}

		else                                    //if both arent null.. find the sucessor of current node(smallest in rigt subtree 
	 	{                                        //or largest in left subtree)
	    int flag2=0;                              
		node *suc=q->right;				        //q is node to be deleted .. go its right and then leftmost to gets its successor
		node *par=q;
		while(suc->left!=NULL)
		{	
			cout<<"in left left\n";
			par=suc;
			suc=suc->left;
			flag2=1;
		}

		node *temp=suc;
		if(flag2)
			par->left=suc->right;

		if(flag==1)                            //left child
			p->left=suc;
		if(flag==2)
			p->right=suc;

		if(flag2==1)
			suc->right=q->right;
		suc->left=q->left;
		
		}

	}

	else									//root to be deleted
	{

		if(root->left==NULL)
			root=root->right;
		else if(root->right==NULL)
			root=root->left;
		else
		{
			node *q=root;
			int flag2=0;                              
			node *suc=q->right;				        //q is node to be deleted .. go its right and then leftmost to gets its successor
			node *par=q;
			while(suc->left!=NULL)
			{	
				par=suc;
				suc=suc->left;
				flag2=1;
			}

			if(flag2)
				par->left=suc->right;
			
			root=suc;
			
			if(flag2==1)
				suc->right=q->right;
			suc->left=q->left;
			
		}


	}

}

int main()
{

	root=NULL;
	int x,n,flag=0;
	while(1)
	{
		cout<<"\n1.Insert\n2.Search\n3.Inorder\n4.Preorder\n5.Postorder\n6.Delete\n7.Exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
				cin>>x;
				node::insert(root,x);
				break;
			case 2:
				cin>>x;
				if(!node::search(root,x))
					cout<<"Not Found\n";	
				break;
			case 3:
				node::inorder(root);
				break;
			case 4:
				node::preorder(root);
				break;
			case 5:
				node::postorder(root);
				break;
			case 6:
				cin>>x;
				node::delet(x);
				break;
			case 7:
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