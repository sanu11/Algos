#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		static node *rear,*front;
		int data;
		node *next;
		void static insert(int x);
		void static delet();
		void static print();
};

node* node::rear=NULL;
node* node::front=NULL;

void node::insert(int x)
{

	node *q=new node;
	q->data=x;
	q->next=NULL;

	if(front==NULL)
	{
		front=q;
		rear=q;
	}
	else
	{
		rear->next=q;
		rear=q;
	}
}

void node::delet()
{
	node *q;
	if(front!=NULL)
	{	
		q=front;
		front=front->next;
		delete q;
	}
	else
		cout<<"\nList Empty\n"<<endl;
}

void node::print()
{
	cout<<endl;
	node *p=front;
	if(front!=NULL)
	{
		while(p!=rear)
		{
			cout<<p->data<<"->";
			p=p->next;
		}
		cout<<p->data<<endl;

		cout<<endl;
	}
}

int main()
{
	int choice;
	while(1)
	{
		cout<<"1.Enqueue\n2.Dequeue\n3.Exit\n";
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