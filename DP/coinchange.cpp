#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,m;
		cin>>n;
		cin>>m;
		
		long long  a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		
		long long dp[n+1];
		
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i=0;i<m;i++)
			for(int j=a[i];j<=n;j++)
				dp[j]+=dp[j-a[i]];

			cout<<dp[n]<<endl;

	return 0;
}