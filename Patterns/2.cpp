#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	if(n%2!=0)
		n+=2;
	int l=n/2;

	for(int i=1;i<=n/2;i++)
	{

		for(int j=1;j<=l-i;j++)
			cout<<" ";
		
		int j;
		for(j=1;j<i;j++)
			cout<<j;

		for(int k=j;j>=1;j--)
				cout<<j;
		cout<<endl;
	}
	if(n%2==0)
	{
		int k;
		for( k=1;k<=l;k++)
			cout<<k;
		for(int j=k-2;j>=1;j--)
			cout<<j;
			cout<<endl;
	}
	for(int i=1;i<l;i++)
	{

		for(int j=1;j<=i;j++)
			cout<<" ";
		
		int j;
		for(j=1;j<l-i;j++)
			cout<<j;

		for(int k=j;j>=1;j--)
				cout<<j;
		cout<<endl;
	}
	return 0;
}