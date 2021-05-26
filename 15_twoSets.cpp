#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll t=n*(n+1)/2;
    if(t%2==0)
    {
        cout<<"YES"<<endl;
        vector<ll> arr1, arr2;
        t /= 2;
        while (n)
        {
            if (t - n >= 0)
            {
                arr1.push_back(n);
                t -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (ll ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (ll ele : arr2)
            cout << ele << " ";
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
