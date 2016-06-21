//push efficient
//push all elememts to queue 1
//during pop dequeue all elements from q1 and enqueue to q2 n print the last dequeued element as popped value 
//swap names of both queues

#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *np;
		static node *rear,*rear1,*front,*front1;
		static void insert(int x);
		static void print();
		static void delet();
		static int dequeue();
		static int enqueue(int x);

}*temp;

node* node::rear=NULL;
node* node::rear1=NULL;
node* node::front=NULL;
node* node::front1=NULL;

void node::insert(int x)
{
	node *p,*q;
	q=new node;
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
		cout<<q->data<<endl;
	}
}

int node::dequeue()
{
	node *p;
	if(front==NULL)
		return -9999;
	else
	{ 
		int x=front->data;
		if(front==rear)
		{
			cout<<"\nPopped value is "<<front->data<<endl;
			delete front;
			front=NULL;
			rear=NULL;
			return -1;
		}
		else
		{
			p=front;
			front=front->np;
			delete p;
			p=NULL;
		}
		return x;
	}
}

int node::enqueue(int x)
{

	node *q=new node;
	q->data=x;
	q->np=NULL;
	if(front1==NULL)
	{
		front1=q;
		rear1=q;
	}
	else
	{
		rear1->np=q;
		rear1=q;
	}
}

void node::delet()
{
	int temp;
	while(1)
	{
		temp=dequeue();
		// cout<<temp<<endl;
		if(temp==-9999)
		{	
			cout<<"\nEmpty Stack\n"<<endl;
			break;
		}
		else if(temp==-1)
			break;
		else
			enqueue(temp);		
	}

swap(rear1,rear);
swap(front,front1);

}

void node::print()
{

	if(front!=NULL)
	{
		cout<<endl;
		cout<<"Queue "<<endl;
		node *p=front;
		
		while(p->np!=NULL)
		{
			cout<<p->data<<"->";
			p=p->np;
		}
		cout<<p->data;
		cout<<endl;
	}
}

int main()
{
	int choice;
	while(1)
	{
		cout<<"1.Push\n2.Pop\n3.Exit\n";
		cin>>choice;
		if(choice==3)
			break;
		else if(choice==1)
		{
			int n;
			cin>>n;
			node::insert(n);
			node::print();
		}
		else if(choice==2)
		{
			node::delet();
			node::print();
		}
		else
			cout<<"Enter correct choice"<<endl;
	}

	return 0;
}