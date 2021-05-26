
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll res=0;
    while(n/5!=0)
    {
        res+=n/5;
        n/=5;
    }
    cout<<res<<endl;
    return 0;
}



