#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int n=str.size();
		    int dp[n+1][n+1];
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=n;j++)
		        {
		            if(i==0 || j==0)
		                dp[i][j]=0;
		            
		            
		            
		            else if(str[i-1]==str[j-1] and i!=j)
		                dp[i][j]=dp[i-1][j-1]+1;
		            else
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		        }
		    }
		    int res=dp[n][n];
		    return res;
		}

};

// { Driver Code Starts.
int main(){
  //Given a string, find the length of the longest repeating subsequence such that the two subsequences don't have same string character at the same position,
  //i.e., any i'th character in the two subsequences shouldn't have the same index in the original string.


	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
