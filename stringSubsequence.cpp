// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countWays(string S1, string S2){
        int m=S1.length(),n=S2.length();
        int dp[m+1][n+1]={{0}};
        for(int i=0;i<=n;i++)
            dp[0][i]=0;
        for(int i=0;i<=m;i++)
            dp[i][0]=1;
        for(int i=1;i<=m;i++)
        {
            
            for(int j=1;j<=n;j++)
            {
                if(S1[i-1]==S2[j-1])
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[m][n];
    }
};

// { Driver Code Starts.
int main(){
    //Given two strings S1 and S2, find the number of times the second string occurs in the first string, whether continuous or discontinuous.
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends
