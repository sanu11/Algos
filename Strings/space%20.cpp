#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	char p[100];
	cin.getline(p,sizeof(p));
	cout<<p<<endl;
	char *s;
	int n=strlen(p);
	int k=0;
	for(int i=0;i<n;i++)
	{

		if(p[i]==' ')
		{
			s[k++]='%';
			s[k++]='2';
			s[k++]='0';

		}
		else s[k++]=p[i];

	}
	s[k]='\0';
	cout<<s;



}