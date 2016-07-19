#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,y,z;
	cin>>n;
	x=0;
	y=1;
	i=n+1;
	while(i>0)
	{
		z=x+y;
		y=x;
		x=z;
		i--;
	}
		cout<<z<<" ";
	

}