#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int maxSum(int n)
        {
            if(n==0)
                return 0;
            int dp[n+1];
            dp[0]=0;
            for(int i=1;i<=n;i++)
            {
                dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
            }
            return dp[n];
        }
};

// { Driver Code Starts.
int main()
{
    //A number n can be broken into three parts n/2, n/3 and n/4 (consider only integer part). 
    //Each number obtained in this process can be divided further recursively. 
    //Find the maximum sum that can be obtained by summing up the divided parts together.
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
