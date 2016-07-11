#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int a[n];
		int dp[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			dp[i]=a[i];

		for(int j=1;j<n;j++)
			for(int i=0;i<j;i++)
			{
				
				if(a[i]<a[j]&&((dp[i]+a[j])>dp[j]))
					dp[j]=a[j]+dp[i];
				
			}
			int mx=-1;
		for(int i=0;i<n;i++)
			mx=max(dp[i],mx);
		cout<<mx<<endl;
	}
	return 0;
}