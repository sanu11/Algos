#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::vector<int> v;
	int n;
	cin>>n;
	v.push_back(1);
	int car=0;
	int prod;
	for(int i=2;i<=n;i++)
	{
		
		car=0;
		for(int j=0;j<v.size();j++)
		{
			prod = v[j]*i+car;
			v[j]=prod%10;
			car=prod/10;
			
		}

		while(car)
		{
			v.push_back(car%10);
			car=car/10;
		}

	}
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i];
	cout<<endl;
	return 0;
}