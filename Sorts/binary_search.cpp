#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int num;
	cin>>num;
	int flag=0;
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		cout<<i<<" "<<j<<endl;
		int mid=(i+j)/2;
		if(a[mid]==num)
		{
			flag=1;
			cout<<mid;
			break;
		}
		else if(num<a[mid])
			j=mid-1;
		else
			i=mid+1;

	}
	if(flag==0)
		cout<<"Not found\n";


	return 0;
}