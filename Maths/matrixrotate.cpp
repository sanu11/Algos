#include<bits/stdc++.h>
using namespace std;
int main()
{
	void roll(int&,int&,int&,int&);	
	void roll1(int&,int&,int&,int&);

	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];

	while(true)
	{	

			cout<<"1.Anti-Clockwise\n2.Clockwise\n3.Exit\n";
			int c;
			cin>>c;
			if(c==1)
			{
				//anti-clockwise
				for(int i=0;i<n/2;i++)
					for(int j=0;j<(n+1)/2;j++)
						roll(a[i][j],a[j][n-i-1],a[n-i-1][n-j-1],a[n-j-1][i]);

				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
						cout<<a[i][j]<<" ";
					cout<<endl;
				}

			}

			else if(c==2)
			{
			//clockwise
				for(int i=0;i<n/2;i++)
					for(int j=0;j<(n+1)/2;j++)
						roll1(a[i][j],a[j][n-i-1],a[n-i-1][n-j-1],a[n-j-1][i]);
			
				for(int i=0;i<n;i++)
				{
				
					for(int j=0;j<n;j++)
						cout<<a[i][j]<<" ";
				cout<<endl;
				
				}

			}

			else
				break;
	}

	return 0;
}

void roll(int &a,int &b,int &c,int &d)
{
	// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	int temp=a;
	a=b;
	b=c;
	c=d;
	d=temp;

}

void roll1(int &a,int &b,int &c,int &d)
{
	// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	int temp=d;
	d=c;
	c=b;
	b=a;
	a=temp;

}
