#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int j,temp;
	for(int i=0;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;

	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;


	return 0;
}