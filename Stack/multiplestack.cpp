#include<bits/stdc++.h>
using namespace std;
class List;
class node;
int size=0,threshold;
vector< pair<node*,node* > >v;
class node
{
	int data;
	node *np;
	node *prev;
	
public:
	static void push(int x);
	static int pop();
	static void print();
};

void node::push(int x)
{
	node *q=new node;
	q->data=x;
	// cout<<q->data<<" ";
	if(v.size()==0)
	{
	
		q->np=NULL;
		q->prev=NULL;
		v.push_back(make_pair(q,q));
		
	}

	else
	{
		int x=v.size()-1;
		if(size!=threshold)
		{

			node *p=v[x].first;
			q->np=p;
			p->prev=q;
			q->prev=NULL;
			v[x].first=q;
			
		}
		else
		{
			size=0;
			q->prev=NULL;
			q->np=NULL;
			v.push_back(make_pair(q,q));

		}

	}

size++;

}

void node::print()
{

	int count=0;
	int x=v.size();
	cout<<x<<endl;
	for(int i=0;i<x;i++)
	{
		node *p=v[i].first;
		count=0;
		while(true)
		{
			cout<<p->data<<" ";
			p=p->np;
			if(p==NULL)
				break;
			count++;
			if(count==size&&i==(x-1))
				break;
			else if(count==threshold)
				break;
		}

	}
	cout<<endl;
}
int node::pop()
{

	int n=v.size()-1;
	node *p=v[n].first;
	node *r=v[n].second;

	node *q=p;
	int x=p->data;
	p=p->np;
	delete q;
	q=NULL;
	p->prev=NULL;
	cout<<p->data<<" ";
	v[x].first=p;
	size--;
	if(p==r)
		v.erase(v.end());	

	return x;

}

int main()
{
	cout<<"Enter threshold\n";
	cin>>threshold;
	int c,x,y;
	while(true)
	{
		cout<<"1.Push\n2.Pop\n3.Print\n4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1:  
					cin>>x;
					node::push(x);
					break;
			case 2:
					y=node::pop();
					cout<<y;
					break;
			case 3:
					node::print();
					break;	
			case 4:
				return 0;

		}
	}
	return 0;
}