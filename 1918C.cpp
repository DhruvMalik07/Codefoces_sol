#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back

void solve()
{
    ll a,b,r;cin>>a>>b>>r;
    if(r==0) {cout<<abs(a-b)<<endl; return;}

    if(a>b) swap(a,b);
    bool flag=true;
    ll num=0;
    for(int i=62;i>=0;i--)
    {
        ll curr=1LL<<i;
        if(flag && !(a&curr) && (b&curr)) {flag=false; continue;}

        if(!(a&curr) && (b&curr))
        {
            ll temp=num|curr;
            if(temp <=r) num=temp;
        }
    } 
    cout<<abs((a^num) - (b^num))<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}