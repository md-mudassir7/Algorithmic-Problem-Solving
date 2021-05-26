#include<bits/stdc++.h>
using namespace std;
int LIS(int arr[],int n)
{
    int dp[n]={1};
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] and dp[j]+1>dp[i])
                dp[i]=dp[j]+1;
        }
    }
    return dp[n-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<LIS(arr,n)<<endl;
    return 0;
}
