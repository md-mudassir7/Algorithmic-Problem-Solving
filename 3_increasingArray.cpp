#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll res=0,mx=arr[0];
    for(ll i=0;i<n;i++)
    {
        if(arr[i]<mx)
            res+=mx-arr[i];
        mx=max(arr[i],mx);
    }
    cout<<res<<endl;
    return 0;
}

