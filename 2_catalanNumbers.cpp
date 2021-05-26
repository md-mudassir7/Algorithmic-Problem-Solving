#include<bits/stdc++.h>
using namespace std;
unsigned long int catalanUsingRecursion(unsigned int n)
{
    if(n<=1)
        return 1;
    unsigned long int res=0;
    for(int i=0;i<n;i++)
        res+=catalanUsingRecursion(i)*catalanUsingRecursion(n-1-i);
    return res;
}
unsigned long int catalanUsingDP(unsigned int n)
{
    unsigned long int dp[n + 1];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];
    }
    return dp[n];

}
int main()
{
    // Task is to generate catalan numbers from 1 upto n
    unsigned int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Recursive way "<<catalanUsingRecursion(i)<<" "<<"DP way "<<catalanUsingDP(i)<<endl;
    }
    return 0;
}
