#include<bits/stdc++.h>
using namespace std;
int size,rear,front,full,empty;
int arr[10];

void print()
{
	int i=front;
	// cout<<front<<" "<<rear<<endl;
	while(1)
	{
		cout<<arr[i]<<" ";
		i=(i+1)%size;
		if(i==rear)
			break;	
	}
}

void Enqueue(int x)
{

	if(!full)
	{		
		empty=0;
		arr[rear]=x;
		rear=(rear+1)%size;
		if(rear==front)
			full=1;
		//cout<<rear<<" "<<front<<endl;
		print();
	}
	
	else
	{
		print();
		cout<<endl;
		cout<<"Queue is full"<<endl;
	}
}
void Dequeue()
{
	
	if(!empty)
	{
		full=0;
		int x=arr[front];
		front=(front+1)%size;
		if(front==rear)
			empty=1;
		else
			print();
	}
	else
	{
		cout<<endl;
		cout<<"Queue is empty"<<endl;
	}
}	

int main()
{
	int n,x;
	empty=0;
	full=0;
	rear=0;
	front=0;
	size=sizeof(arr)/sizeof(int);
	
	while(true)
	{
		cout<<"\n1.Enqueue\n2.Dequeue\n3.Exit\n";
		cin>>n;

		if(n==1)
		{
			cin>>x;
			Enqueue(x);
		}
	
		else if(n==2)
			Dequeue();
	
		else if(n==3)
			break;
	
		else
			cout<<"Enter correct option"<<endl;
	}
	return 0;
}