#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	while(n%2==0)
	{
		cout<<"2 ";
		n=n/2;
	}
	int x=sqrt(n);
	for(int i=3;i<=n;i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}

	}
	
	return 0;

}