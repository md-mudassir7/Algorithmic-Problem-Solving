#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    int m=X.size(),n=Y.size();
	    int dp[m+1][n+1];
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	            
	            else if(X[i-1]==Y[j-1])
	                dp[i][j]=dp[i-1][j-1]+1;
	            else
	                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	        }
	    }
	    int temp=dp[m][n];
	    int res=(m-temp)*costX+(n-temp)*costY;
	}
  

};
	

// { Driver Code Starts.
int main() 
{
    //Given two strings X and Y, and two values costX and costY, the task is to find the minimum cost required to make the given two strings identical. 
    //You can delete characters from both the strings. The cost of deleting a character from string X is costX and from Y is costY. 
    //The cost of removing all characters from a string is the same.

   	int t;
    cin >> t;
    while (t--)
    {
       	string x, y;
       	cin >> x >> y;
        
       	int costX, costY;
       	cin >> costX >> costY;

        

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
