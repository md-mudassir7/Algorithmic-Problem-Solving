// Online C++ compiler to run C++ program online
#include <iostream>
void findSqrt(int n,int precision)
{
    int start=0,end=n;
    int mid;
    float ans;
    
    
    
    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        if(mid*mid<n)
        {
            start=mid+1;
            ans=mid;
        }
        else
            end=mid-1;
    }
    float increment=0.1;
    for(int i=0;i<precision;i++)
    {
        while(ans*ans<=n)
        {
            ans+=increment;
        }
        ans = ans - increment;
        increment = increment / 10;
    }
    printf("%d\n",ans);
}
int main() {
    int n;
    scanf("%d",&n);
    findSqrt(n,4);
    return 0;
}
