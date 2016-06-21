#include <iostream>
#define ll long long
using namespace std; 
 
/* 
 * Function to calculate modulus of x raised to the power y 
 */
ll modular_pow(ll base, ll exponent, int modulus)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
        cout<<result<<endl;	
    }
    return result;
}
/* 
 * Main
 */
int main()
{
    ll x, y;
    int mod;
    cout<<"Enter Base Value: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    cout<<"Enter Modular Value: ";
    cin>>mod;
    cout<<modular_pow(x, y , mod);
    return 0;
}
