#include<bits/stdc++.h>
using namespace std;
void count(int a[],int n,int exp)
{


	//count of every number;
	int c[10]={0};
	for(int i=1;i<=n;i++)
		c[(a[i]/exp)%10]++;
	//cumulative
	for(int i=1;i<10;i++)
		c[i]+=c[i-1];
	int b[n+1];

	//stable coz of reverse traverse
	//element in proper position
	for(int i=n;i>=1;i--)
	{

		b[c[(a[i]/exp)%10]]=a[i];
		c[(a[i]/exp)%10]--;
	}
	for(int i=1;i<=n;i++)
		a[i]=b[i];

cout<<endl;
cout<<"Place "<<exp<<endl;
for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int mx=-99999;
	//numbers from 1 to n
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}

	for(int i=1;mx/i>0;i*=10)
	count(a,n,i);
		
	cout<<endl;
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}