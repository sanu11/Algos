#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next,*prev;
		static void insert(int x);
		static void print();
		static void deletefirst();
		static void deletelast();

} *head;



void node::insert(int x)
{

	if(head==NULL)
	{
	
		head=new node;
		head->data=x;
		head->next=head;
		head->prev=head;
	
	}
	else
	{
	
		node *p=head;
		node *q=new node;
		q->data=x;

		head->prev->next=q;
		q->prev=head->prev;
		q->next=head;
		head->prev=q;
	
	}
}
void node::print()
{
	cout<<endl;
	node *p=head;
	if(head!=NULL)
	{
		while(p->next!=head)
		{	
			cout<<p->data<<"->";
			p=p->next;
		}
		cout<<p->data<<endl;
	}
	else
	cout<<"List Empty"<<endl;	
}
void node::deletefirst()
{
	if(head!=NULL)
	{	
		if(head->next!=head)
		{	
			node *p=head;
			head->next->prev=head->prev;
			head->prev->next=head->next;
			head=head->next;
			delete p;
		}
		else
		{
			delete head;
			head=NULL;
		}
	}
}

void node::deletelast()
{
		if(head!=NULL)
		{	
			if(head->next!=head)
			{
				node *p=head;			
				node *q=head->prev;
				head->prev->prev->next=head;
				head->prev=head->prev->prev;
				delete q;
			}
			else
			{
				delete head;
				head=NULL;
			}
		}
}

int main()
{
	head=NULL;
	int n,flag=0,c;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete First \n3.Delete Last\n4.Print\n4.Exit\n";
		cin>>c;
		switch(c)
		{
		case 1:
			cin>>n;
			node::insert(n);
			node::print();
			break;
		case 2:
			node::deletefirst();
			node::print();
			break;
		case 3:
			node::deletelast();
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