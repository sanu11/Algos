#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
int sum=0,car=0,k;
int n,prod;
cin>>n;
v.push_back(1);
for(int i=2;i<=n;i++)
{
car=0;	
for(int j=0;j<v.size();j++)
{
prod=i*v[j]+car;
v[j]=prod%10;
car=prod/10;
}
while(car)
{
v.push_back(car%10);
car/=10;
}
}
//cout<<"Factorial of "<<n<<" is ";
for(int i=v.size()-1;i>=0;i--)
cout<<v[i];
cout<<endl;
return 0;
}
