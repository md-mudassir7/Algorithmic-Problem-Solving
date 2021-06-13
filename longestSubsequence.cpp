// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
        int res = 0;
        int dp[N] = {0};
        for(int i = 0; i < N; i++)
        {
            dp[i] = 1;
            
            
            
            
            for(int j = 0; j < i; j++)
            {
                if(abs(A[j] - A[i]) == 1)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main(){
    //Given an array A[] of size N, find the longest subsequence such that difference between adjacent elements is one.
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends
