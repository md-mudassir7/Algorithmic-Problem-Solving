//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int pickValues(int arr[], int n) {
        int dp[n];
        dp[0]=arr[0];
        dp[1]=arr[1];
        dp[2]=arr[2];
        dp[3]=arr[3];
        if(n<=4)
            return *min_element(arr,arr+n);
        for(int i=4;i<n;i++)
        {
        
            dp[i]=arr[i]+min(min(dp[i-1],dp[i-2]),min(dp[i-3],dp[i-4]));
        }
        int res=min(min(dp[n-1],dp[n-2]),min(dp[n-3],dp[n-4]));
        return res;
    }
};

// { Driver Code Starts.
int main() {
    //Given an array arr[] of N positive integers. Select values from the array such that their sum is minimum.
    //You must pick at least 1 value from each group of 4 consecutive elements. 

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.pickValues(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


  // } Driver Code Ends
