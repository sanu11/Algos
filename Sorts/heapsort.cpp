#include<bits/stdc++.h>
using namespace std;
int heapsize=0;
void heapify(int a[],int i)
{
	int left=2*i;
	int right=2*i+1;
	int largest;
	if(left<=heapsize&&a[left]>=a[i])	
		largest=left;
	else
		largest=i;
	if(right<=heapsize && a[right]>=a[largest])
		largest=right;
	
	if(largest!=i)
	{	
		swap(a[largest],a[i]);
		heapify(a,largest);
	}
}

void buildmaxheap(int a[],int n)
{
	
	heapsize=n;	
	for(int i=n/2;i>=1;i--)
		heapify(a,i);

}
void sort(int a[],int n)
{
	for(int i=n;i>=1;i--)
	{
		swap(a[1],a[i]);
		heapsize--;
		heapify(a,1);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	buildmaxheap(a,n);
	sort(a,n);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}