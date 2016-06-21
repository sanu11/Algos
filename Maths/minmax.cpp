#include<bits/stdc++.h>
using namespace std;
#define minimum 1000000
#define maximum -999999
int main()
{
	int n,mn,mn2,mx,mx2;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	mn=minimum;
	mn2=minimum;
	mx=maximum;
	mx2=maximum;
	for(int i=0;i<n;i++)
	{
		if(a[i]<mn)
		{	
			mn2=mn;
			mn=a[i];
		}
		else if(a[i]<mn2)
			mn2=a[i];

		if(a[i]>mx)
		{	
			mx2=mx;
			mx=a[i];
		}
		else if(a[i]>mx2)
			mx2=a[i];
	}
	cout<<"First Minimum is "<<mn<<endl;
	cout<<"Second Minimum is "<<mn2<<endl;
	cout<<"First Maximum is "<<mx<<endl;
	cout<<"Secon Maximum is "<<mx2<<endl;
	
	return 0;
}