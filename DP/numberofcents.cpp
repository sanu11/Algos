#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,n,v;
	cin>>t;
	while(t--)
	{
		cin>>v>>n;
		int a[n]	;
		int dp[v+1];
		std:fill(dp,dp+v+1,99999);
		dp[0]=0;

		for(int i=0;i<n;i++)
			cin>>a[i];

		int value;
		for(int i=1;i<=v;i++)
			for(int j=0;j<n;j++)
			{
				if(a[j]<=i)
				{
					value=dp[i-a[j]];
					if(value+1<dp[i]&&value!=99999)
						dp[i]=value+1;
				}
			}
			if(dp[v]!=99999)
		cout<<dp[v]<<endl;
	else
		cout<<"-1"<<endl;

	}
	return 0;
}