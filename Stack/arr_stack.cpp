#include<bits/stdc++.h>
using namespace std;
int top;
int arr[1000];
void push(int x)
{
top=top+1;
arr[top]=x;
cout<<top<<"top\n";
}
int not_empty()
{

if(top==0)
	return 0;
return 1;
}
int pop()
{
if(not_empty())
{	
top=top-1;	
return arr[top+1];
}
else
printf("Stack empty\n");
}
void print()
{
	for (int i=1;i<=top;i++)
		cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
top=0;
int ch,n;
while(true)
{
cout<<"1.push\n";
cout<<"2.pop\n";
cin>>ch;
if(ch==1)
{
cout<<"enter number"<<endl;
cin>>n;
push(n);
print();
}
else if(ch==2)
{
pop();
print();
}
else
	cout<<"enter right choice";
}
return 0;
}