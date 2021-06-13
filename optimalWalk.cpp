// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long optimalWalk(long long N, long long A, long long B)
    {
        long long int dp[N+1];
        dp[0]=0;
        dp[1]=A;
        for(int i=2;i<=N;i++)
        {
            
            
            
            
           dp[i]=min(dp[i-1]+A,dp[(i+1)/2]+B+(i%2)*A);
        }
        return dp[N];
    }
};

// { Driver Code Starts.

int main(){
    //Given a point on x axis, (N,0), you are standing at origin and you can only move on x-axis. 
    //Lets say you are at (x,0), at each step you can either move one step forward ie (x+1,0) or one step backwards (x-1,0) or make a jump to double your current position (2*x,0). 
    //One step movement costs you A while a jump costs you B. If your initial position is (0,0) , find the minimum cost to reach (N,0) .


    int t;
    cin>>t;
    while(t--){
        long long N, A, B;
        cin>>N>>A>>B;
        
        Solution ob;
        cout<<ob.optimalWalk(N, A, B)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
