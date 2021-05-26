#include<bits/stdc++.h>
using namespace std;
int getNthUglyNumber(int n)
{
    int ugly[n];
    ugly[0]=1;
    int i2=0,i3=0,i5=0;
    int n2=2,n3=3,n5=5;
    int res=1;
    for(int i=1;i<n;i++)
    {
        res=min(n2,min(n3,n5));
        ugly[i]=res;
        if(res==n2)
        {
            i2++;
            n2=ugly[i2]*2;
        }
        if(res==n3)
        {
            i3++;
            n3=ugly[i3]*3;
        }
        if(res==n5)
        {
            i5++;
            n5=ugly[i5]*5;
        }
    }
    return res;
}
int main()
{
    //Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
    //The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers.
    // By convention, 1 is included.
    //Write a program to find Nth Ugly Number.
    int n;
    cin>>n;
    cout<<getNthUglyNumber(n)<<endl;
    return 0;
}
