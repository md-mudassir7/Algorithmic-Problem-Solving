#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll arr[],ll n)
{
    ll dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(ll i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
    }
    return dp[n-1];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}
