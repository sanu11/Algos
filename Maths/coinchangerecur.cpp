#include<bits/stdc++.h>
using namespace std;
int makeChange(int n, int denom) 
{
	 cout<<n<<" "<<denom<<endl;
	 int next_denom = 0;
	 switch (denom) 
	 {
		 case 25:
			 next_denom = 10;
			 break;
		 case 10:
			 next_denom = 5;
			 break;
		 case 5:
		 	return 1;
			break;
	}
	int ways = 0;
	for (int i = 0; i * denom <= n; i++) {
	ways += makeChange(n - i * denom, next_denom);
	 
 }
 return ways;
 
 }
int main()
{

	cout<<makeChange(50,25);
}