#include <iostream>
using namespace std;

int main() {
  //Geek wants to build bridges between two banks of a river to help migrants to reach their homes. 
  //But, he can build a bridge only between two similar posts. Bridges can't overlap. The task is to find the maximum number of bridges geek can build. 

	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    int n=s1.length(),m=s2.length();
	    int dp[n+1][m+1];
	    for(int i=0;i<=n;i++)
	    {
	        
	        
	        for(int j=0;j<=m;j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	            else if(s1[i-1]==s2[j-1])
	                dp[i][j]=dp[i-1][j-1]+1;
	            else
	                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	        }
	    }
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}
