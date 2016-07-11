#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,temp;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int a[n];
		int flag=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		int mx=a[0];
		int min_at=a[0],max_at=a[0],prev_min_at,prev_max_at;
		for(int i=1;i<n;i++)
		{
			//cout<<"df"<<a[i]<<" "<<a[i]*max_at<<" "<<a[i]*min_at<<endl;
			prev_max_at=max_at;
			prev_min_at=min_at;
			max_at=max(max(a[i],a[i]*prev_max_at),a[i]*prev_min_at);
			min_at=min(min(a[i],a[i]*prev_max_at),a[i]*prev_min_at);
			mx=max(max_at,mx);
			// cout<<min_at<<" "<<max_at<<" " <<mx<<"\n";
		}
		cout<<mx<<endl;
	}
	return 0;
}