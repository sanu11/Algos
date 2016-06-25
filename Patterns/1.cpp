#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{

		for(int j=1;j<=n-i;j++)
			cout<<" ";
		
		int j;
		for(j=1;j<i;j++)
			cout<<j;

		for(int k=j;j>=1;j--)
				cout<<j;
		

		cout<<endl;


	}


	return 0;
}