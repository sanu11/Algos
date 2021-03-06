#include<bits/stdc++.h>
using namespace std;
int n;

void merge(int a[],int i, int mid,int j)
{
	// cout<<i<<" "<<mid<<" "<<j<<endl;	
	int n1=mid-i+1;
	int n2=j-mid;
	int left[n1+2];
	int right[n2+2];

	//copy elements into left and right arrays ..merge them and copy back into a
	for(int k=0;k<n1;k++)
		left[k]=a[i+k];
	for(int k=0;k<n2;k++)
		right[k]=a[mid+1+k];

	int p=0;
	int q=0;

	//required as if one array gets over while comparing something should be there at its end which must be maximum;
	left[n1]=99999999;
	right[n2]=99999999;

	//merge
	for(int k=i;k<=j;k++)
	{
		if(left[p]<right[q])
		{
			a[k]=left[p];
			p++;
		}
		else
		{
			a[k]=right[q];
			q++;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void mergesort(int a[],int i,int j)
{
	if(i<j)
	{
		int temp=(i+j)/2;	
		//cout<<temp<<" "<<i<<" "<<j<<endl;	

		mergesort(a,i,temp);
		mergesort(a,temp+1,j);
		merge(a,i,temp,j);

	}
}

int main()
{
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];

	mergesort(a,0,n-1);
	cout<<endl;
	return 0;
}