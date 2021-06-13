#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    if(n==1)
	        return 0;
	    int dp[n]={1};
	    for(int i=1;i<n;i++)
	        dp[i]=1;
	    int res=dp[1];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            
	            
	            if(arr[i]>arr[j] and dp[j]+1>dp[i])
	            {
	                dp[i]=dp[j]+1;
	                res=max(dp[i],res);
	            }
	        }
	    }
	    return n-res;
	} 
};

// { Driver Code Starts.
int main() 
{
   	//Given an array arr of size N, the task is to remove or delete the minimum number of elements from 
    //the array so that when the remaining elements are placed in the same sequence order form an increasing sorted sequence.
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
