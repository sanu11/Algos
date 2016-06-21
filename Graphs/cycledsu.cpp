#include<bits/stdc++.h>
using namespace std;

int *par;
int **arr;
int n;
int Cycle=0;

int find(int i)
{
	if(par[i]==-1)
		return i;
	else
		return find(par[i]);
}	

void dounion(int x,int y)
{
	int a=find(x);
	int b=find(y);
	par[a]=b;

}


int main()
{
	cout<<"Enter  number of nodes\n";
	cin>>n;
	arr=new int*[n+1];
	
	for(int i=1;i<=n;i++)
	arr[i]=new int[n+1];
	
	par=new int[n+1];
	int temp,x,y,flag=0;
	
	memset(arr,0,sizeof(arr));

		for(int i=1;i<=n;i++)
			par[i]=-1;
	

	for(int i=1;i<=n;i++)
	{	
		for(int j=i;j<=n;j++)
		{
			if(i==j)
				arr[i][j]=0;
			else
			{	
				cout<<"Enter edge between "<<i <<" "<<j<<endl;	
				cin>>temp;
				arr[i][j]=temp;
				arr[j][i]=temp;
				if(temp!=0)
				{	
					x=find(i);
					y=find(j);
					if(x==y)
						flag=1;
					else
						dounion(x,y);
				}
			}
		}
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	if(flag)
		cout<<"Cycle Present\n";
	else
		cout<<"No Cycle\n";
	return 0;
}