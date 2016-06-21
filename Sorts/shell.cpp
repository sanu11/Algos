#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];

	int gap;
	gap=n/2; 
	
	while(gap>0)
	{
		cout<<endl;
		cout<<"Gap "<<gap<<endl;
		for(int j=gap+1;j<=n;j+=gap)
		{
		
			int temp=a[j];
			int i=j;
		
			while(temp<a[i-gap]&&(i-gap)>=1)
			{
		
				a[i]=a[i-gap];
				i=i-gap;
		
			}
			a[i]=temp;
	    
	    }

	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";	
	
	cout<<endl;
	
	gap=gap/2;
	
	}

	return 0;
}