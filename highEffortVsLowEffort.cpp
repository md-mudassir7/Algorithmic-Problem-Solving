#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends


class Solution
{
    public:
        int maxAmt(int n , int h[] , int l[])
        {
           int dp[n];
           dp[0]=h[0];
           dp[1]=max(h[1],max(l[0]+l[1],dp[0]+l[1]));
           for(int i=2;i<n;i++)
           {
               dp[i]=max(h[i]+dp[i-2],dp[i-1]+l[i]);
           }
            return dp[n-1];
        }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            int hi[n] , li[n];
            for(int i = 0 ;i<n;i++)
                cin>>hi[i];
            for(int i = 0 ;i<n;i++)
                cin>>li[i];
            Solution ob;
            cout<<ob.maxAmt(n,hi,li)<<endl;    
        }
}  // } Driver Code Ends
