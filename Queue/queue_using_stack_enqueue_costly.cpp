//enqueue costly 
//push values from stack 1 to stack2 
//push new value above it
//push everythng back to stack1 
//pop from stack 1

#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		static node *top,*top1;
		int data;
		node *np;
		void static insert(int x);
		void static delet();
		void static print();
		void static transfer();
		void static transfer2();
		int static pop();
};

node* node::top=NULL;
node* node::top1=NULL;

void node::insert(int x)
{
	//stack1 o stack 2
	transfer();
	node *q=new node;
	q->data=x;
	//push in stack 2
	if(top1==NULL)
	{
		q->np=NULL;
		top1=q;
	}
	else
	{
		q->np=top1;
		top1=q;
	}
//back from stack2 to stack1
transfer2();
}

void node::transfer2()
{
	//from stack2 to stack1
	node *p=top1;
	node *r=top;
	node *q,*s;

	while(p!=NULL)
	{
		q=new node;
		q->data=p->data;
		q->np=top;
		top=q;

		s=p;
		p=p->np;
		delete s;
		if(s==top1)
			top1=NULL;
	}
}


void node::transfer()
{
	//from stack1 to stack2
	node *p=top;
	node *r=top1;
	node *q,*s;
	
	while(p!=NULL)
	{
		q=new node;
		q->data=p->data;
		q->np=top1;
		top1=q;

		s=p;
		p=p->np;
		delete s;
		if(s==top)
			top=NULL;
	}
}

int node::pop()
{
	if(top!=NULL)
	{
		node *p=top;
		
		int x=top->data;
		top=top->np;
		delete p;
		return x;
	}
	else
		return -1;
}

void node ::delet()
{

	int x=pop();
	if(x!=-1)
		cout<<"Dequeued value is "<<x<<endl;
	else
		cout<<"Empty Queue "<<endl;

}

void node::print()
{

	node *p=top;
	if(top!=NULL)
	{
		cout<<"Stack 1"<<endl;
		while(p->np!=NULL)
		{
			cout<<p->data<< "->";
			p=p->np;
		}
		cout<<p->data<<endl;
		cout<<endl;
	}

	p=top1;
	if(top1!=NULL)
	{
		cout<<"Stack 2"<<endl;
		while(p->np!=NULL)
		{
			cout<<p->data<< "->";
			p=p->np;
		}
		cout<<p->data<<endl;
		cout<<endl;

	}
}

int main()
{
	int n,x;
	while(true)
	{
		cout<<"\n1.Enqueue\n2.Dequeue\n3.Exit\n";
		cin>>n;

		if(n==1)
		{
			cin>>x;
			node::insert(x);
			node::print();
		}
		else if(n==2)
		{
			node::delet();
			node::print();
		}
		else if(n==3)
			break;
		else
			cout<<"Enter Correct Option"<<endl;
	}
	return 0;
}
