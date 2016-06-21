#include<bits/stdc++.h>
using namespace std;
int rear,front;
int *vi;
int **arr;
int *a;
int n;

int not_empty()
{
	if(front==rear)
	 	return 0;
	return 1;
}

void Enqueue(int x)
{
	a[rear]=x;
	rear++;
}

int Dequeue()
{
	if(not_empty())	
		return a[front++];
}

void print()
{
	for (int i = front; i < rear; i++)
	{
		cout<<a[i]<<" ";
	}
}

void bfs(int x)
{
	int y;
	Enqueue(x);
		vi[x]=1;
	while(not_empty())
	{	
		y=Dequeue();
		cout<<y<<" ";
		for(int i=0;i<n;i++)
		{
			if(arr[y][i]!=0&&vi[i]==0)
			{
				Enqueue(i);
				vi[i]=1;
			}
		}
	}
}

int main()
{
	int temp;
	rear=0;
	front=0;
	cout<<"Enter  number of nodes\n";
	cin>>n;
	a=new int[n];
	arr=new int*[n];
	
	for(int i=0;i<n;i++)
		arr[i]=new int[n];

	memset(vi,sizeof(vi),0);
	memset(arr,sizeof(arr),0);

	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(i==j)
				arr[i][j]=0;
			else
			{	
				cout<<"Enter edge between "<<i <<" "<<j<<endl;	
				cin>>temp;
				arr[i][j]=temp;
				arr[j][i]=temp;
			}
		}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	bfs(2);
	
	return 0;
}