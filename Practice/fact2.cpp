#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n;
	cin>>n;
	int sum=n;
	for(int i=n-1;i>=1;i--)
		sum*=i;

	cout<<sum<<endl;

	return 0;
}