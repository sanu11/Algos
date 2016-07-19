#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	queue<string>q;
	string s1,s2;
	q.push("1");
	while(n--)
	{
		s2=q.front();
		cout<<s2<<endl;
		q.pop();
		s1=s2;
		q.push(s1.append("0"));
		q.push(s2.append("1"));

	}



	return 0;
}