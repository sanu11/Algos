#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
void binary(int n)
{

	while(n)
	{
		v.push_back(n%2);
		n=n/2;
	}

}
int main()
{
	int n;
	cin>>n;
	binary(n);
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i]<<" ";
	cout<<endl;

	return 0;
}