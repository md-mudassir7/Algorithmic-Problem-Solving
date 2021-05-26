#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n)
{
    int res=0,tmax=0;
    for(int i=0;i<n;i++)
    {
        tmax+=arr[i];
        if(tmax<0)
            tmax=0;
        res=max(res,tmax);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],nc=0,pc=0,sum=0,res=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        res=max(res,arr[i]);
        if(arr[i]<0)
            nc++;
        if(arr[i]>0)
            pc++;
    }
    if(pc==n)
        cout<<sum<<endl;
    else if(nc==n)
        cout<<res<<endl;
    else
        cout<<kadane(arr,n)<<endl;
    return 0;
}
