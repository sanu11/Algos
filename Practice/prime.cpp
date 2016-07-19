#include<bits/stdc++.h>
using namespace std;
int vi[1000000];
#define n 1000000
void prime()
{
	memset(vi,0,sizeof(vi));
	int x=sqrt(n);
	for(int i=2;i<=x;i++)
	{
		if(!vi[i])
		for(int j=i*2;j<=n;j+=i)
		{
			if(!vi[j])
				vi[j]=1;
		}
	}
}

int main()
{
	prime();
	int y;
	for(int i=1;i<n;i++)
		if(!vi[i])
			cout<<i<<" ";
		cout<<endl;
	// while(true)
	// {
	// cin>>y;
	// if(vi[y]==1)
	// 	cout<<"NO\n";
	// else
	// 	cout<<"Yes\n";
	return 0;
}