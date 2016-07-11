#include<bits/stdc++.h>
using namespace std;
int main()
{
	char *z;
	void strrev(char *);
	char a[100];
	cin>>a;
	strrev(a);
	cout<<a;

}

void strrev(char *a)
{
	int n=strlen(a);
	
	char temp;
	for(int i=0;i<n/2;i++)
	{

		temp=a[i];
		a[i]=a[n-1-i];
		a[n-i-1]=temp;
	}
	
	//OR 
	
	// char *end=a;
	// end=end+n;
	// end--;
	// while(a<end)
	// {
	// 	temp=*a;
	// 	*a++=*end;
	// 	*end--=temp;
	// }

}