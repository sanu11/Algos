#include<bits/stdc++.h>
using namespace std;
int size;
void generate(std::vector<int> v)
{
	static int count=0;
	count++;
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	if(v.size()==size)
		return;
	v.push_back(1);
	generate(v);
	v.erase(v.end()-1);

	v.push_back(0);
	generate(v);

}
int main()
{
	int n;
	cin>>n;
	size=0;
	int x=n;
	while(x)
	{
		x=x>>1;
		size++;
	}
	std::vector<int> v;
	v.push_back(1);
	generate(v);
	return 0;
}