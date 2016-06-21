//dequeue costly
//push all values to stack 1
//during dequeue.. if stack 2 is empty ..pop all values from stack1 and push to stack2 
//n pop current top from stack2 which will be dequeued value
//else just pop from stack 2
//push new value into stack1

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
		int static pop();		
};

node* node::top=NULL;
node* node::top1=NULL;

void node::insert(int x)
{
	
	node *q=new node;
	q->data=x;

	if(top==NULL)
	{
		q->np=NULL;
		top=q;
	}
	else
	{
		q->np=top;
		top=q;
	}

}

void node::transfer()
{
	//stack1 to stack 2 push all values
	node *p=top;
	node *q,*s;
	node *r=top1;
	while(p!=NULL)
	{
		q=new node;
		q->data=p->data;
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
		s=p;
		p=p->np;

		delete s;
		if(s==top)
			top=NULL;
	}
}

int node::pop()
{
	if(top1!=NULL)
	{
		node *p=top1;
		
		int x=top1->data;
		top1=top1->np;
		delete p;
		return x;
	}
	else
		return -1;
}

void node ::delet()
{

	if(top1==NULL)
		transfer();             //from stack1 to stack2 and then pop from stack2
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
