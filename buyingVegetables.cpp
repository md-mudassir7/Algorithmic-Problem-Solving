// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minCost(int n, vector<int> cost[]) {
        int dp[n][3];
        for(int i=0;i<3;i++)
            dp[0][i]=cost[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                
                
                
                if(j==0)
                    dp[i][j]=cost[i][j]+min(dp[i-1][1],dp[i-1][2]);
                if(j==1)
                    dp[i][j]=cost[i][j]+min(dp[i-1][0],dp[i-1][2]);
                if(j==2)
                    dp[i][j]=cost[i][j]+min(dp[i-1][1],dp[i-1][0]);
            }
        }
        return min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
    }
};

// { Driver Code Starts.

int main(){
    //Geek wants to inspect the quality of vegetables at each shop in the vegetable market.
    //There are N different vegetable sellers in a line. A single kilogram each of brinjal, carrot and tomato are available with every seller but at different prices. 
    //Geek wants to buy exactly one vegetable from one shop and avoid buying the same vegetables from adjacent shops. 

    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> cost[N];
        int x, y, z;
        for(int i = 0;i < N;i++){
            cin>>x>>y>>z;
            cost[i].push_back(x);
            cost[i].push_back(y);
            cost[i].push_back(z);
        }
        
        Solution ob;
        cout<<ob.minCost(N, cost)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
