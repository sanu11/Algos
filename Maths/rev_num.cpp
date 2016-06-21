#include<iostream>
using namespace std;
int reverse(int a)
{
int ans;
while(a)
{
ans=ans*10+a%10;
a=a/10;
}
return ans;
}
int  main()
{
	int a;
	cin>>a;
cout<<reverse(a);


	return 0;
}
