#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	
	//numbers from 1 to n
	for(int i=1;i<=n;i++)
		cin>>a[i];

	int c[n+1]={0};
	
	//count of every number;
	for(int i=1;i<=n;i++)
		c[a[i]]++;

	//cumulative
	for(int i=2;i<=n;i++)
		c[i]+=c[i-1];

	int b[n+1];

	//stable coz of reverse traverse
	//element in proper position
	for(int i=n;i>=1;i--)
	{
		b[c[a[i]]]=a[i];
		c[a[i]]--;
	}

	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
	cout<<endl;

	return 0;
}