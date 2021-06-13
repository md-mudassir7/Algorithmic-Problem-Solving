#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        long long int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
            dp[i]%=1000000007;
        }
        return dp[n]%1000000007;
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
  //A frog jumps either 1, 2, or 3 steps to go to the top. 
  //In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.

	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends
