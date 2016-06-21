//initially 1 elemnent to left and rest elements to right.. take first element from right array put in proper 
//posiiton in left array .. keep on doing till right array ends and left array fills completely 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,temp,j;
cin>>n;
int a[n];

//input
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=1;i<n;i++)
{
//last element of left array
j=i-1;
while(a[j+1]<a[j]&&j>=0)
{
//swap  a[j] and a[j+1]
a[j+1]+=a[j];
a[j]=a[j+1]-a[j];
a[j+1]=a[j+1]-a[j];
j--;
}

for(int k=0;k<n;k++)
cout<<a[k]<<" ";

cout<<endl<<endl;
}
cout<<endl;
return 0;
}