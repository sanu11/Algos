#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,temp,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=n;
		int i=0;
		int arr[10];
		while(n)
		{
			temp=n%10;
			n=n/10;
			arr[i]=temp;
			i++;
		}
		int k=i;
		int y;
	sort(arr,arr+k);
	int mn=9999999,flag=0;
	do
	{
    	string s="";
    	for(int i=0;i<k;i++)
    		s+=arr[i]+'0';
    	stringstream ss(s);
		int y;
		ss >> y;
		// cout<<y<<" "<<x<<endl;
		if(y>x&&y<mn)
		{
			mn=y;
			flag=1;
		}
    	
  	}

  while ( std::next_permutation(arr,arr+k) );
if(!flag)
  	cout<<"not possible"<<endl;
  else
cout<<mn<<endl;
}
	return 0;
}
