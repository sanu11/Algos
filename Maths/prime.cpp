#include<bits/stdc++.h>
using namespace std;
#define max 100000
int a[max];
void prime()
{
for(int i=2;i*i<=max;i++)
{
	if(a[i]!=1)
	for(int j=i*i;j<=max;j=j+i)
		a[j]=1;
}
}
int  main()
{
memset(a,sizeof(a),0);
int n;
prime();
cout<<"Prime numbers upto ?  (<=100000)\n";
cin>>n;
int j=0;
for(int i=2;i<n;i++)
if(a[i]==0)
	{
	cout<<i<<" ";
	j++;
}
cout<<"\nNumber of primes = "<<j<<endl;
	return 0;
}
