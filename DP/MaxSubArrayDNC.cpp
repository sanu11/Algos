#include<bits/stdc++.h>
using namespace std;
int crosssubarray(int a[],int low,int mid,int high)
{
int sum=0,left_index=0,right_index=0;
int left_sum=-999999,right_sum=-999999;
for (int i=mid;i>=low;i--)
{
	sum=sum+a[i];
	if(sum>left_sum)
		left_sum=sum;
}
sum=0;
for (int i=mid+1;i<=high;i++)
{
	sum=sum+a[i];
	if(sum>right_sum)
		right_sum=sum;
}
return left_sum+right_sum;
}

int maxsubarray(int a[],int low,int high)
{
if(low==high)
	return a[low];
else
{
	int mid=(low+high)/2;
	int left,right,cross;
	left=maxsubarray(a,low,mid);
	right=maxsubarray(a,mid+1,high);
	cross=crosssubarray(a,low,mid,high);
	return max(cross,max(left,right));
}
}
int main()
{
int n;
cin>>n;
int a[n+1];

for(int i=1;i<=n;i++)
cin>>a[i];

int result;
result = maxsubarray(a,1,n);
cout<<result<<endl;
}