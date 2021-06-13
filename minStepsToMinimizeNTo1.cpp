
 // } Driver Code Ends
class Solution{

	public:
	int minSteps(int n) 
	{ 
	    int dp[n+1];
	    dp[0]=0;
	    dp[1]=0;
	    dp[2]=1;
	    dp[3]=1;
	    for(int i=4;i<=n;i++)
	    {
	        
	        
	        
	        if(i%2==0 and i%3==0)
	            dp[i]=min(dp[i-1],min(dp[i/2],dp[i/3]))+1;
	        else if(i%2==0)
	            dp[i]=min(dp[i-1],dp[i/2])+1;
	        else if(i%3==0)
	            dp[i]=min(dp[i-1],dp[i/3])+1;
	        else
	            dp[i]=dp[i-1]+1;
	    }
	    return dp[n];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
    //Given a number N, the task is to count minimum steps to minimize it to 1 according to the following criteria:
    //If N is divisible by 2 then you may reduce N to N/2.
    //If N is divisible by 3 then you may reduce N to N/3.
    //Otherwise, Decrement N by 1.
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
