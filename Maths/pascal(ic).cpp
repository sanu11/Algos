#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	std::vector<int> v;
	v.push_back(1);
	// cout<<"1"<<endl;
	for(int i=1;i<=n;i++)	
	{		
		for(int j=0;j<i;j++)
		{
			if(j==0)
				cout<<"1 ";
			else
			{
				v[i]=v[i]+v[i+1];
				cout<<v[i]<<" ";
			}
		v.push_back(0);
		}
		cout<<endl;
	
	}

	return 0;
}