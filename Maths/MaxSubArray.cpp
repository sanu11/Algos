#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
int n;
cin>>n;
int a[n],b[n];
int sum=-999999999,mx=0;

for(int i=0;i<n;i++)
	cin>>a[i];	

for(int i=0;i<n;i++)
{	
	if(a[i]>(sum+a[i]))
		sum=a[i];
	else
		sum+=a[i];
	b[i]=sum;
}

mx=b[0];

for(int i=1;i<n;i++)
	mx=max(b[i],mx);

cout<<mx<<endl;
	
	return 0;
}