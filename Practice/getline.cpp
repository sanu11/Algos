#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s;
	getline(cin,s);
	cout<<s;
	int n=s.length();
	int a[10];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	{
		a[s[i]-'0']++;
	}
	cout<<endl;
	int c=0;
	for(int i=0;i<10;i++)
	{
		if(a[i]==1)
		c++;
		cout<<"count of "<<i<<" is "<<a[i]<<endl;
	}
	cout<<c<<endl;
	return 0;
}