#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    char temp=s[0];
    ll res=1,ans=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==temp)
            res++;
        else
        {
            ans=max(ans,res);
            res=1;
            temp=s[i];
        }
    }
    cout<<max(ans,res)<<endl;
    return 0;
}

