// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int n;
void permute(string s, int l, int r)
{
   int i;
   if(l>n||r>n||r>l)
    return;
   if (r==n)
     cout<<s<<endl;
  else
  {
     if(l<n)
     {
      // cout<<"l<n\n";
      // cout<<l<<" " <<r<<s<<" "<<endl;
    
        s=s+"(";
        permute(s,l+1,r);

     }
     if(r<l)
     {
      // cout<<"r<n\n";
      // cout<<l<<" " <<r<<s<<" "<<endl;
    
        s=s+")";
        permute(s,l,r+1);
     }
  }

}
 
/* Driver program to test above functions */
int main()
{
    cin>>n;
    string s="";
    permute(s, 0 , 0);
    return 0;
}