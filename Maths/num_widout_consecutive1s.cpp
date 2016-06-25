#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int x;
void fun(vector <int> v)
{
	int n=v.size();	
	int sum=0;

	if(n==(x+1))
	{
		for(int i=n-1;i>=0;i--)
		sum+=v[i]*pow(2,(n-i-1));
		cout<<sum<<" ";
		return;
	}
	else
	{
		int temp=v[n-1];
		if(temp==0)
		{
			v.push_back(1);
			fun(v);
			v.pop_back();
			v.push_back(0);
			fun(v);
		}
		else
		{
			v.push_back(0);
			fun(v);
		}
	}
}

int main()
{
	cin>>x;
	v.push_back(0);
	fun(v);
	return 0;
}