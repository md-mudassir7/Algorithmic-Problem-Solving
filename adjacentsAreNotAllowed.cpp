// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSum(int n, vector<vector<int>> mat)
    {
        int dp[n];
        dp[0]=max(mat[0][0],mat[1][0]);
        dp[1]=max(mat[0][1],mat[1][1]);
        dp[1]=max(dp[0],dp[1]);
        
        
        
        
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+max(mat[0][i],mat[1][i]),dp[i-1]);
        }
        return dp[n-1];
    }
};

// { Driver Code Starts.

int main(){
    //You have a rectangular grid mat of dimension 2 x N. 
    //You need to find out the maximum sum such that no two chosen numbers are adjacent, vertically, diagonally or horizontally.

    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> mat(2, vector<int>(N, 0));
        for(int i = 0;i < 2; i++){
            for(int j = 0; j < N; j++)
                cin>>mat[i][j];
        }
        
        Solution ob;
        cout<<ob.maxSum(N, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
