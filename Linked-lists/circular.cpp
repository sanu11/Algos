#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *np;
		static void insert(int x);
		static void print();
		static void deletfirst();
		static void deletlast();

}*head;

void node::insert(int x)
{
	if(head==NULL)
	{
		head=new node;
		head->data=x;
		head->np=head;
	}
	else
	{
		node *p=head;
		
		while(p->np!=head)
			p=p->np;
		node *q=new node;
		q->data=x;
		p->np=q;
		q->np=head;

	}

}

void node::deletfirst()
{
	if(head!=NULL)
	{	
		node *p=head;
		node *q=head;
		if(head->np!=head)
		{
			while(q->np!=head)
				q=q->np;
			q->np=q->np->np;
			head=q->np;
			delete p;
		}
		else
		{
			head=NULL;
			delete p;
		}
	}
}

void node::deletlast()
{
	if(head!=NULL)
	{
		node *p=head;
		node *q;
		if(p->np!=head)
		{	
			while(p->np->np!=head)
				p=p->np;
			q=p->np;
			p->np=head;
			delete q;
		}
		else
		{
			head=NULL;
			delete head;
		}
	}
}


void node::print()
{
	cout<<endl;
	node *p=head;
	if(head!=NULL)
	{
		while(p->np!=head)
		{
			cout<<p->data<<"->";
			p=p->np;
		}
		cout<<p->data<<endl;
		}
	else
		cout<<"List Empty"<<endl;
}

int main()
{
	head=NULL;
	int i;
	int c,n=0;
	int flag=0;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete First\n3.Delete Last \n4.Print\n5.Exit\n";
		cin>>c;
		switch(c)
		{
		case 1:
			cin>>i;
			node::insert(i);
			node::print();
			break;
		case 2:
			node::deletfirst();
			node::print();
			break;
		case 3:
			node::deletlast();
			node::print();
			break;			
		case 4:
			node::print();
			break;
		case 5:
			flag=1;
			break;
		default:
			cout<<"Enter Correct Option\n";
	}
	if(flag)
		break;
	}
	return 0;
}