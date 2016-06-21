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

//1st element of right array	
temp=a[i];
//last element of left array
j=i-1;

while(temp<a[j]&&j>=0)
{

//shift a[j] to right and replace leftmost value with element to be placed (temp) )
a[j+1]=a[j];

j--;

}
//leftmost element will be the that is placed at its proper position

a[j+1]=temp;

for(int k=0;k<n;k++)
cout<<a[k]<<" ";

cout<<endl<<endl;
}
cout<<endl;
return 0;
}