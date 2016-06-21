#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		static node *top;
		int data;
		node *next;
		void static insert(int x);
		void static delet();
		void static print();
};

node* node::top=NULL;

void node::insert(int x)
{

	node *q=new node;
	q->data=x;

	if(top==NULL)
	{
		top=q;
		q->next=NULL;
	}
	else
	{
		q->next=top;
		top=q;
	}
}
void node::delet()
{
	if(top!=NULL)
	{	
		node *q=top;
		top=top->next;
		delete q;
	}
}
void node::print()
{

	cout<<endl;
	node *p=top;
	if(top!=NULL)
	{
		while(p->next!=NULL)
		{
			cout<<p->data<<"->";
			p=p->next;
		}
	cout<<p->data<<endl;
	}
	else
		cout<<"Stack Empty"<<endl;
	cout<<endl;
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