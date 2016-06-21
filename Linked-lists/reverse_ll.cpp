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
	static void reverse_2step();
	static void reverse_1step();
	
}*head;

void node::insert(int i)
{
	node *p,*q;
	p=new node;
	p->data=i;
	p->np=	NULL;
	if(head==NULL)
		head=p;	

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

void node::reverse_2step()
{
	int flag=0;
	node *p=head;
	node *r,*q;
	node *temp=NULL;
	while(1)          // slots of 3 pointers p,q,r, in sequence
	{
		if(p!=NULL)
		{
			q=p->np;
			p->np=temp;		
			if(q!=NULL)
			{	
				r=q->np;	
				q->np=p;

				if(r!=NULL)
				{
					p=r->np;     //p points to next slot i.e r's next
					r->np=q;
		  			temp=r;	
		  			
		  		}
		  		else
		  			flag=1;
		  	}
		  	else
		  		flag=2;
		}
		else
			flag=3;
		if(flag)
			break;
	}

	if(flag==1)
		head=q;
	else if(flag==2)
		head=p;
	else if(flag==3)
		head=r;

}

void node::reverse_1step()
{
	node *p=head;
	node *r,*q;
	q=p->np;
	p->np=NULL;
	if(q!=NULL)
	{	
		r=q->np;
		q->np=p;
	}
	while(r!=NULL)
	{
		p=q;
		q=r;
		r=r->np;;
		q->np=p;
	}
	head=q;
}

int main()
{
	head=NULL;
	int i;
	int c,n=0;
	int flag=0;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete\n3.Print\n4.Reverse_2step\n5.Reverse_1step\n6.Exit\n";
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
			node::reverse_2step();
			break;
		case 5:
			node::reverse_1step();
			break;
		case 6:
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