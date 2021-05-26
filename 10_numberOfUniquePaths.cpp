#include<bits/stdc++.h>
using namespace std;
int paths1(int n,int m)
{
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i== 0 || j==0)
                dp[i][j]=0;
            else if(i==1 || j==1)
                dp[i][j]=1;
            else
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n][m];
}
int paths2(int n,int m)
{
    int dp[n]={1};
    dp[0]=1;
    for(int i=0;i<m;i++)
        for(int j=1;j<n;j++)
            dp[j]+=dp[j-1];
    return dp[n-1];
}
int main()
{
    //Given a matrix n x m find out the number of ways to reach the bottom right corner of the matrix i.e the index nm
    int n,m;
    cin>>n>>m;
    cout<<paths1(n,m)<<endl;
    cout<<paths2(n,m)<<endl;
    return 0;
}
