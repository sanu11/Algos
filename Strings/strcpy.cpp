#include<bits/stdc++.h>
using namespace std;
void strcopy(char*,char*);
int main()
{
char a[100];
cout<<"Enter string\n";
cin>>a;
int n=strlen(a);
char *b;
strcopy(b,a);
cout<<"Source String is "<<a<< " \nCopied String is "<<b<<"\n";
return 0;
}

void strcopy(char *b,char *a)
{
while(*a)
{
	*b++=*a++;
}	
*b='\0';
}