#include<bits/stdc++.h>
using namespace std;
void strccat(char*,char*);
int main()
{
char a[100],b[100];
cout<<"Enter string\n";
cin>>a;
cout<<"Enter string to be concatenated\n";
cin>>b;
int n=strlen(a);
char *p=a+n;
strccat(p,b);
cout<<"concatenated String is \n";
cout<<a<<endl;	
}
void strccat(char *b,char *a)
{
while(*a)
{
	*b++=*a++;
}	
*b='\0';
}