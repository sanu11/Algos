#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int dp[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	std::fill(dp,dp+n,1);
	for(int j=1;j<n;j++)
		for(int i=0;i<j;i++)
		{
			if(a[i]<a[j]&&(dp[i]+1)>dp[j])
				dp[j]=dp[i]+1;
		}
		int mx=-1;
		for(int i=0;i<n;i++)
			mx=max(mx,dp[i]);
		cout<<mx<<endl;
	return 0;
}