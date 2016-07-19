#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int x=0;
	while(n)
	{
		x=x*10+n%10;
		n=n/10;

	}
	cout<<x;

}