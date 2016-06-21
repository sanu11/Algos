#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll i)
{
	if(i==1)
		return 1;
	return i*fact(i-1);
}
int main()
{
ll n;
cin>>n;
cout<<fact(n)<<endl;
}