#include<bits/stdc++.h>
using namespace std;
int *vi,*dis,**arr,n;
int minDistance()
{
	int j=0,min=999999;
	for(int i=1;i<=n;i++)
	{

		if(vi[i]==0&&dis[i]<min)
		{
			min=dis[i];
			j=i;
		}

	}
	return j;
}


void djikstras(int x)
{
	int t=n;
	while(t--)
	{	

		int u=minDistance();
		cout<<u<<endl;
		vi[u]=1;
		for(int i=1;i<=n;i++)
		{
			if(vi[i]==0&&arr[u][i]!=0&&(dis[u]+arr[u][i])<dis[i])
				dis[i]=dis[u]+arr[u][i];
		}
	}

}
int main()
{
	int temp;
	cout<<"Enter  number of nodes\n";
	cin>>n;
	
	arr=new int*[n+1];
	for(int i=1;i<=n;i++)
		arr[i]=new int[n+1];

	dis=new int[n+1];	
	vi=new int[n+1];

	memset(vi,0,sizeof(vi));
	std::fill(dis,dis+n+1,99999);
	
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

	int y;
	cout<<"Enter the source vertex\n";
	cin>>y;
	dis[y]=0;
	djikstras(y);
	//cout<<"Minimum distances to all nodes from "<<y<<" are ";
	for(int i=1;i<=n;i++)
		if(i!=y)
			cout<<"Minimum distance to  "<<i<<" is "<<dis[i]<<endl;
	return 0;
}