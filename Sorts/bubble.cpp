//every iteration fixes position of largest element to right

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,temp,j;
cin>>n;
int a[n];
bool flag=false;

//input
for(int i=0;i<n;i++)
cin>>a[i];

int t=n-1;

for(int i=0;i<n;i++)
{
for(int j=0;j<t;j++)
{
		if(a[j+1]<a[j])
		{
			swap(a[j+1],a[j]);
			flag=true;
		}
}
t--;
	if(flag==false)
		break;

for(int k=0;k<n;k++)
cout<<a[k]<<" ";

cout<<endl<<endl;
}

return 0;
}