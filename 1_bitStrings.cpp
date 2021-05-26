#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int power(long long x,  ll y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    ll n;
    cin>>n;
    cout<<power(2,n,1000000007)<<endl;
    return 0;
}


