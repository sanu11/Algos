#include<bits/stdc++.h>
using namespace std;
class add
{
public:
	int a,b;
	int res;
	add(){}
	add(int x)
	{
	a=x;

	}
	void stradd(char *s1,char *s2)
	{
		strcat(s1,s2);
		// cout<<s1;
	}

	void stradd(char *s1 , int i)
	{
		char temp[50];
		sprintf(temp,"%d",i);
		strcat(s1,temp);
		cout<<s1;
	}

};
add x,y,z;
int main()
{
	cout<<abc.a<<endl;
	add A;
	char str[50]="hello";
	A.stradd(str,"There");
	cout<<str<<endl;
	A.stradd(str,100);
	// cout<<A.a<<endl;
	char temp[40];
	int i=400;
	int j=45.54;
	sprintf(temp,"%d",i);
	cout<<temp;

}