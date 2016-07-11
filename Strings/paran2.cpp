# include<stdio.h>
# define MAX_SIZE 100
#include<bits/stdc++.h>
using namespace std;
void permute(string s, int n, int open, int close)
{

	if(close == n) 
	{
		cout<<s<<endl;
		return;
	}
	else
	{
		if(open > close)
		 {
			s+= ")";
			permute(s, n, open, close+1);
		}
		if(open < n)
		{
		s+= "(";
		permute(s, n, open+1, close);
		}
	}
}

/* driver program to test above functions */
int main()
{
int n = 2;
string s = "";
permute(s,n,0,0);
getchar();
return 0;
}
