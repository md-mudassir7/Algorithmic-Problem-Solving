#include<bits/stdc++.h>
using namespace std;
int ways(int n)
{
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=3;i<=n;i++)
        dp[i]+=dp[i-3];
    for(int i=5;i<=n;i++)
        dp[i]+=dp[i-5];
    for(int i=10;i<=n;i++)
        dp[i]+=dp[i-10];
    return dp[n];
}
int main()
{
    //Given a number n find out the ways to rech n using 3 5 and 10
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}
