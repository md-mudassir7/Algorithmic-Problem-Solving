#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    int dp[n+1];
		    memset(dp,0,sizeof(dp));
		    dp[0]=1;
		    for(int i=1;i<=n;i++)
		    {
		        dp[i]+=dp[i-1];
		    }
		    for(int i=2;i<=n;i++)
		    {
		        dp[i]+=dp[i-2];
		    }
		    
		    
		    return dp[n];
		}
};

// { Driver Code Starts.
int main(){
  //There are N stairs, and a person standing at the bottom wants to reach the top. 
  //The person can climb either 1 stair or 2 stairs at a time. 
  //Count the number of ways, the person can reach the top (order does not matter).


	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
