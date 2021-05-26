#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n-1],sum=0;
    for(ll i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll missing=(n)*(n+1)/2-sum;
    cout<<missing<<endl;
    return 0;
}
