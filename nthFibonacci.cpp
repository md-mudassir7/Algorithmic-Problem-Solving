#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        for(long long int i=4;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
