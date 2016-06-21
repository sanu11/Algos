#include<bits/stdc++.h>
using namespace std;
int **a,n,*par;
int find(int x)
{

	if(par[x]==-1)
		return x;
	else return find(par[x]);

}
void uni(int x,int y)
{

	int a=find(x);
	int b=find(y);
	par[x]=y;

}

int main(int argc, char const *argv[])
{
	cout<<"Enter number of nodes\n";
	cin>>n;
	a=new int *[n+1];
	for (int i=1;i<=n;i++)
		a[i]=new int [n+1];

	for(int i=1;i<=n;i++)
	{	
		a[i][i]=0;
		for(int j=i+1;j<=n;j++)
		{
				cout<<"Enter Edge between "<<i<<" and "<<j<<" : ";
				cin>>a[i][j];
				a[j][i]=a[i][j];
		}
	}

	par=new int [n+1];
	cout<<"Ajacecy matrix is"<<endl;
	for(int i=1;i<=n;i++)	
	{
		par[i]=-1;
		for(int j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
	}

	cout<<"Edges in MST are\n";
	
	int p,q,x,y,e,sum,min;
	sum=0;
	while(e<n-1)
	{
		min=999;
		for(int i=1;i<=n;i++)	
		{
			for(int j=i+1;j<=n;j++)
			{

				if(a[i][j]<min&&a[i][j]!=0)
				{
					min=a[i][j];
					p=i;
					q=j;
				}

			}
		}
		e++;
		x=find(p);
		y=find(q);
		if(x==y)
			continue;
		else
		{
			uni(x,y);
			cout<<"Edge "<<p<<" "<<q<<" added to MST\n";
			sum+=a[p][q];
			a[p][q]=999;
		}

	}
	cout<<"Cost of MST is "<<sum<<endl;;


	return 0;
}