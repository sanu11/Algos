#include<bits/stdc++.h>
using namespace std;

int *vi;
int **arr;
int n;

void dfs(int x)
{
	vi[x]=1;
	cout<<x<<" ";
	for( int i=0;i<n;i++)
		if (arr[x][i]!=0)
		{
			if(vi[i]==0)
				dfs(i);
			// else
			// {
			// 	cout<<"Cycle found \n";
			// 	return;
			// }
		}
}
int main()
{
	cout<<"Enter  number of nodes\n";
	cin>>n;
	arr=new int*[n];
	
	for(int i=0;i<n;i++)
	arr[i]=new int[n];
	
	vi=new int[n];
	int temp;
	
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

	cout<<"DFS is\n";
	
	for (int i=0;i<n;i++)
		if(vi[i]==0)
			dfs(i);
}