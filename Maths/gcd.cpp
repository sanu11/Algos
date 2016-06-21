#include<iostream>
using namespace std;
int temp;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	if(a>b)
		return gcd(b,a%b);
	return  gcd(a,b%a);
}
int main()
{
int a,b;
cin>>a>>b;
if(a>b)
cout<<gcd(a,b);
else
cout<<gcd(b,a);
}
