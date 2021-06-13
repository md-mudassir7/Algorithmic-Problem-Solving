#include <iostream>
#include<algorithm>
#include<cstdio>
//#include<Windows.h> 
using namespace std;  

 // } Driver Code Ends

class Solution{
    public:
    /*You are requried to complete this method */
    int max_Books(int a[], int n, int k)
    {
        int res=0,tmax=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>k)
                tmax=0;
            else
            {
                
                
                tmax+=a[i];
            }
            res=max(res,tmax);
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
  //You have N stacks of books. Each stack of books has some non zero height Hi equal to the number of books on that stack 
  //( considering all the books are identical and each book has a height of 1 unit ). In one move, 
  //you can select any number of consecutive stacks of books such that the height of each selected stack of books Hi <= K .
  //Once such a sequence of stacks is chosen , You can collect any number of books from the chosen sequence of stacks .

  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	Solution ob;
  	cout<<ob.max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}

  // } Driver Code Ends
