/*
dsu is Disjoint Connected components..
Suppose that we have N nodes and M edges. The graph can be disconnected and may have multiple connected components. 
DSU is used to calculate to determine the connected components in a graph.

In this algo a gp id is given to a subgraph and upcoming edges are added to respective groups or subgraphs.
*/
#include<bits/stdc++.h>
int *gpid,*size;
using namespace std;
int find_group(int i)
{
if(gpid[i]==i)
	return i;
else
	return gpid[i]=find_group(gpid[i]);
}
int main()
{
int n,x,y,a,b;
scanf("%d",&n);
gpid=new int[n+1];
size=new int[n+1];
//memset(size,1,(n+1)*4);
for(int i=1;i<=n;i++)
{
	gpid[i]=i;
	size[i]=1;
}
for(int i=1;i<=n;i++)
{
scanf("%d%d",&x,&y);
a=find_group(x);
b=find_group(y);
if(a!=b)
{
if(size[a]>=size[b])	
{
size[a]=size[a]+size[b];
size[b]=0;
}
else
{
size[b]=size[b]+size[a];
size[a]=0;
}
gpid[b]=a;
}
//for(int i=1;i<=n;i++)
//		cout<<size[i]<<" ";
for(int i=1;i<=n;i++)
		cout<<gpid[i]<<" ";

}
}