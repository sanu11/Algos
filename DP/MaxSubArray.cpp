#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		int a[n],b[n];
		int sum=-999999999,mx=0;

		for(int i=0;i<n;i++)
			cin>>a[i];	


		//max subaray contiguous
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

		cout<<mx<<" " ;
			
		//max subsequence (non contiguous)
		int mn=a[0],k=0;
		sum=0;
		for(int i=0;i<n;i++)
			{
			if(a[i]>0)
				sum+=a[i];
			else
				k++;
			mn=max(mn,a[i]);
			}
			// cout<<"k is "<<k<<endl;
			if(k==n)
				cout<<mn<<endl;
			else
				cout<<sum<<endl;
	}
	return 0;
}