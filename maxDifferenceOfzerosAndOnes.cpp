#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    int n=S.length();
	    int dp[n],ocnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(S[i]=='1')
	        {
	            dp[i]=-1;
	            ocnt++;
	        }
	        else
	            dp[i]=1;
	    }
	    if(ocnt==n)
	        return -1;
	    int res=-1,tmax=0;
	    for(int i=0;i<n;i++)
	    {
	        tmax+=dp[i];
	        if(tmax<0)
	            tmax=0;
	        res=max(res,tmax);
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends
