#include<bits/stdc++.h>
using namespace std;
int n;
class node
{
	public:
	int data;
	node *np;
	static void insert(int i);
	static void delet(int i);
	static void print ();
}*head;

void node::insert(int i)
{
	node *p,*q;
	p=new node;
	p->data=i;
	p->np=	NULL;
	if(head==NULL)
	{
		head=p;
	}	
	else
	{
		q=head;
		while(q->np!=NULL)
		q=q->np;
		q->np=p;
	}
}
void node::delet(int i)
{
	int j=1;
	if(head==NULL)
		return;
	node *p=head;
	if(i==0)
	{
		delete head;
		head=p->np;
	}
	else
	{
		while(j!=i&&p->np!=NULL)
		{
			p=p->np;
			j++;
		}
		if(i!=j)
			cout<<"Not Found"<<endl;	
		else if(p->np!=NULL) 
		{
			node *q;
			q=p->np;
			p->np=p->np->np;
			delete q;
		}
	}
}
void node::print()
{
	if(head==NULL)
		return;
	node *q=head;
	while(q->np!=NULL)
	{
		cout<<q->data <<"->";	
		q=q->np;
	}
	cout<<q->data;
}

int main()
{
	head=NULL;
	int i;
	int c,n=0;
	int flag=0;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete\n3.Print\n4.Exit\n";
		cin>>c;
		switch(c)
		{
		case 1:
			cin>>i;
			node::insert(i);
			n++;
			break;
		case 2:
			cin>>i;
			node::delet(i);
			break;
		case 3:
			node::print();
			break;
		case 4:
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