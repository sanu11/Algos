#include<bits/stdc++.h>
using namespace std;
int main()
{

	int atin=-1;
	int dotin=-1;
	string s;
	cin>>s;
	int flag=0;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='.')
			dotin=i;
		if(s[i]=='@')
		{
		if(atin==-1)
			atin=i;
		else
			flag=1;
		}
	}
	if(atin==-1||dotin==-1)
		flag=1;
	if((dotin-atin)<1)
		flag=1;
	if(dotin==(n-1))
		flag=1;
	if(atin==0)
		flag=1;
	if(flag)
		cout<<"Invalid"<<endl;
	else
		cout<<"valid"<<endl;

	return 0;
}
