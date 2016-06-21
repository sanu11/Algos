#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high)
{

	int pivot=a[high];
	int i=low-1;
	cout<<pivot<<endl;
	for(int j=low;j<high;j++)
	{

		if(a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);

	return i+1;
}

void quicksort(int a[],int low,int high)
{
	int pivot;	
	if(low<high)
	{
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];

	quicksort(a,1,n);

	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}