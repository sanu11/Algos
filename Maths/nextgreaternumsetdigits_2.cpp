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
		int j=-1;
		int k=i-1;
		reverse(arr,arr+k+1);
	
		for(int i=k;i>0;i--)
		{

			if(arr[i-1]<arr[i])
			{
				j=i;
				break;
			}
		}
		if(j==-1)
			cout<<"not possible";
		else
		{
			int y;
			j--;
			int mn=99999;
			for(int i=j+1;i<=k;i++)
				if(arr[i]>arr[j]&&arr[i]<mn)
				{
					mn=arr[i];
					y=i;
				}
				// cout<<mn;
				swap(arr[j],arr[y]);
				j++;
				sort(arr+j,arr+k+1);

			for(int i=0;i<=k;i++)
				cout<<arr[i];
		}
		cout<<endl;


	}
	return 0;
}
