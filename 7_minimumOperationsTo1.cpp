#include<bits/stdc++.h>
using namespace std;
int countSteps(int n)
{
    int res=0;
    while(n>1)
    {
        res++;
        if(n%2==0)
            n/=2;
        else if(n%4==1 || n==3)
            n-=1;
        else
            n+=1;
    }
    return res;
}
int main()
{
    //Given a number N. The task is to reduce the given number N to 1 in the minimum number of steps. You can perform any one of the below operations in each step.
    //Operation 1: If the number is even then you can divide the number by 2.
    //Operation 2: If the number is odd then you are allowed to perform either (n+1) or (n-1).
    int n;
    cin>>n;
    cout<<countSteps(n)<<endl;
    return 0;
}

