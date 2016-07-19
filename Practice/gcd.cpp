#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	if(a>b)
		gcd(b,a%b);
	else
		gcd(a,b%a);

}
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<gcd(n1,n2);
	return 0;
}