#include<bits/stdc++.h>
using namespace std;

int arr[100];
int rear,front;

int not_full()
{
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<size<<endl;
	if(rear==size)
		return 0;
	return 1;
}

int not_empty()
{
	if(front==rear)
	{
		front=rear=0;
		return 0;
	}
	return 1;
}

void Enqueue(int x)
{
	if(not_full())
	{	
		arr[rear]=x;
		rear++;
	}
	else
		cout<<"Sorry Queue is full"<<endl;
}
void Dequeue()
{
	if(not_empty())	
		front++;
	else
		cout<<"Sorry Queue is empty"<<endl;
}
void print()
{
	for (int i = front; i < rear; i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int n,x;
	rear=0;
	front=0;
	while(true)
	{
		cout<<"\n1.Enqueue\n2.Dequeue\n";
		cin>>n;

		if(n==1)
		{
			cin>>x;
			Enqueue(x);
			print();
		}
		else if(n==2)
		{
			Dequeue();
			print();
		}
	}
	return 0;
}