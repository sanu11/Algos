//pop efficient
//enqueue to q1 ..dequeue all elements from q2 to q1
//swap names

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
		static void enqueue(int x);
		static void transfer();
}*temp;

node* node::rear=NULL;
node* node::rear1=NULL;
node* node::front=NULL;
node* node::front1=NULL;

int node::dequeue()
{
    if(front1!=NULL)
    {	
		node *p=front1;
		int x=front1->data;
		front1=front1->np;
		if(front1==NULL)
			rear1=NULL;
		delete p;
		return x;
	}
	else 
		return -1;
}

void node::enqueue(int x)
{
	node *q=new node;
	q->data=x;
	q->np=NULL;
	rear->np=q;
	rear=q;
}

void node::transfer()
{

	while(1)
	{
		int x=dequeue();      //dequeue from q2  and enqueue into q1;
		if(x!=-1)
			enqueue(x);
		else
			break;
	}
}

void node::insert(int x)
{
	node *q=new node;
	q->data=x;
	q->np=NULL;
	front=q;
	rear=q;
	
	transfer();                    //transfer data from q2 to q1
	
	 //swap q1  and q2 names;
	swap(rear,rear1);
	swap(front,front1);
}

void node::print()
{

	if(front1!=NULL)
		{
			cout<<endl;
			cout<<" Stack "<<endl;
			node *p=front1;
			while(p!=NULL)
			{
				cout<<p->data<<"->";
				p=p->np;
			}
			cout<<endl;
		}
	else
		cout<<"\nEmpty Stack\n"<<endl;

}
void node::delet()
{
	if(front1!=NULL)
	{	
		node *p=front1;
		cout<<"Popped value is "<<front1->data<<endl;
			front1=front1->np;
		delete p;
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