#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,temp,k;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
	cin>>a[i];

for(int i=0;i<n;i++)
{
temp=a[i];
k=i;
for(int j=i+1;j<n;j++)
{
if(a[j]<temp)
{
	temp=a[j];
	k=j;
}
}
swap(a[i],a[k]);

for(int h=0;h<n;h++)
	cout<<a[h]<<" ";
cout<<endl;
}
return 0;
}
