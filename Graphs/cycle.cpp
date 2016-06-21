#include<bits/stdc++.h>
using namespace std;

int *vi;
int **arr;
int n;
int Cycle=0;
void dfs(int x,int parent)
{
	vi[x]=1;
	cout<<x<<" ";
	for( int i=1;i<=n;i++)
		if (arr[x][i]!=0)
		{
			if(vi[i]==0)
				dfs(i,x);
			else if(vi[i]==1&&i!=parent)
			{
		//		cout<<"Cycle is present\n";
	    		Cycle++;
	    	}
	    }
}

int main()
{
	cout<<"Enter  number of nodes\n";
	cin>>n;
	arr=new int*[n+1];
	
	for(int i=1;i<=n;i++)
	arr[i]=new int[n+1];
	
	vi=new int[n+1];
	int temp;
	
	memset(vi,0,sizeof(vi));
	memset(arr,0,sizeof(arr));

	for(int i=1;i<=n;i++)
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
			}
		}
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	cout<<"DFS is\n";
	
	for (int i=1;i<=n;i++)
		if(vi[i]==0)
			dfs(i,-1);

cout<<"\nCycles "<<Cycle/2<<endl;
}