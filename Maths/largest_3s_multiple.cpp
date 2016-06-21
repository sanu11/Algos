#include<bits/stdc++.h>
using namespace std;
int n;
void print(int a[])
{
	for(int i=n-1;i>=0;i--)
		if(a[i]!=-1)
			cout<<a[i];
	cout<<endl;

}

int main()
{
	
	cin>>n;
	int a[n];
	int b[n];
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
		b[i]=a[i]%3;

	int x=sum%3;
	if(x==0)
	{
		for(int i=n-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	else
	{
		int flag=0,remov=0,mx=0,index=-1;
		for(int i=0;i<n;i++)
		{
			if(b[i]==x)
			{	
				index=i;
				flag=1;
				remov=a[i];
				break;
			}
		}

		if(flag)
			mx=sum-remov;
		int temp;
		if(x==1)
			temp=2;
		else 
			temp=1;
		int c=0;
		int mx2=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]==temp)
			{	
				c++;
				//a[i]=-1;
				b[i]=-1;
				mx2-=a[i];
			}
			if(c==2)
				break;
		}
		if(flag)
		{
			if(c==2)
				cout<<max(mx,mx2)<<endl;
			else
				cout<<mx<<endl;
		}
		else 	
		{	
			if(c==2)
				cout<<mx2<<endl;
			else
				cout<<"Not possible"<<endl;
		}
	}
	return 0;
}