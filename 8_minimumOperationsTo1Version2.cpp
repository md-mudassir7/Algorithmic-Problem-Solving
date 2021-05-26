#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int dp[n+1];
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    if(n<=4)
        return dp[n];
    else
    {
        for(int i=5;i<=n;i++)
        {
            if(i%7==0)
            {
                dp[i]=min(1+dp[i/7],min(1+dp[i-1],1+dp[i-2]));
            }
            else
                dp[i]=min(1+dp[i-1],1+dp[i-2]);
        }
        return dp[n];
    }
}
int main()
{
    //Given a number n the task is to reduce n to 1 using minimum operations .The operations are
    //1.Decrease the number by 1
    //2.Decrease the number by 2
    //3.Divide by 7 if its a multiple of 7
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
