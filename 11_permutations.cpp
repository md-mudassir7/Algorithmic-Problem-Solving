#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2 or n==3)
        cout<<"NO SOLUTION"<<endl;
    else
    {
        if(n&1)
        {
            for(ll i=n;i>=1;i-=2)
                cout<<i<<" ";
            for(ll i=n-1;i>=2;i-=2)
                cout<<i<<" ";
        }
        else
        {
            for(ll i=n-1;i>=1;i-=2)
                cout<<i<<" ";
            for(ll i=n;i>=2;i-=2)
                cout<<i<<" ";
        }
    }
    return 0;
}


