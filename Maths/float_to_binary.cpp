#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
	std::vector<bool> v;
	int i=8;
	while(n)
	{
		bool a=n&1;
		v.push_back(a);
		n=n>>1;
		// cout<<n<<endl;
	}
	for (int i = v.size()-1; i >=0; i--)
	{
		cout<<v[i];
	}

}
void binary2(float a)
{
	
	std::vector<int> v;
	float intpart,fractpart;
	while(!(intpart==1&&fractpart==00))
	{
	
		a=a*2;
		fractpart=modf(a,&intpart);
		cout<<intpart;
		a=fractpart;
	
	}


}
int main()
{
	string s;
	cin>>s;	
	float result;
	stringstream(s) >> result;
	float intpart,fractpart;
	fractpart=modf(result,&intpart);
	binary((int)intpart);
	cout<<".";
	binary2(fractpart);
	return 0;
}