#include<stdio.h>
#include<cstring>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n;
void solution( vector<int > sol)
{

  int pos=sol.size();
  if(pos==(n+1))
  {

    int ans = 0;
    for(int i = 0;i<sol.size();i++)
    ans+= pow((double)2,i)*sol[sol.size()-1-i];
    cout<<ans<<endl;

 }

 else
 { 
  if(sol[pos-1]==0)
  {
    sol.push_back(1);
    solution(sol);
    sol.pop_back();
    sol.push_back(0);
    solution(sol);
  }
  else
  {
    sol.push_back(0);
    solution(sol);  
  }
 
 } 

}

int main()
{ 
  
  cin>>n;
  vector<int > sol;  
  sol.push_back(0);
  solution( sol);
 
 return 0;
}