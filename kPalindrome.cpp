#include <bits/stdc++.h>
using namespace std;


bool is_k_palin(string s,int k);

int main() {
	// your code goes here
  //A string is k palindrome if it can be transformed into a palindrome on removing at most k characters from it. 
  //Your task is to complete the function is_k_palin which takes two arguments a string str and a number N . 
  //Your function should return true if the string is k palindrome else it should return false.

	int t;
	cin>>t;
	while(t--)
	{
		string s ;
		cin>>s;
		int k;
		cin>>k;
		
		cout<<is_k_palin(s,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function*/
bool is_k_palin(string s,int k)
{
    string rev = string(s.rbegin(),s.rend());
    int n=s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s[i-1]==rev[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        
    }
    int res=n-dp[n][n];
    if(k>=res)
        return true;
    return false;
}
