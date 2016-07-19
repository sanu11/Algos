#include<bits/stdc++.h>
using namespace std;
int n;
void merge(int a[],int i,int mid,int j)
{
	
	int n1=mid-i+1;
	int n2=j-mid;
	int l[n1+1];
	int r[n2+1];
	for(int k=0;k<n1;k++)
		l[k]=a[i+k];
	for(int k=0;k<n2;k++)
		r[k]=a[mid+1+k];


	l[n1]=99999;
	r[n2]=99999;
	
	int p=0;
	int q=0;


	for(int k=i;k<=j;k++)
	{

		if(l[p]<r[q])
		{
			a[k]=l[p];
			p++;

		}
		else
		{
			a[k]=r[q];
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
		mergesort(a,i,temp);
		mergesort(a,temp+1,j);
		merge(a,i,temp,j);

	}



}
int main()
{
	// int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	mergesort(a,0,n-1);




	return 0;
}