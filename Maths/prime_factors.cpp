#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int x=sqrt(n);
	int i=2;
	while(n%i==0)
	{
		cout<<i<<" ";
		n=n/i;
	}
	for(i=3;i<=x;i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
	}
	if(n>2)
		cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;
	prime(n);
	return 0;
}