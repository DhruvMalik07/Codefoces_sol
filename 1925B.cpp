#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=2;i<n;i++)
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
    ll x,n;cin>>x>>n;
    ll l=1, r=x/n,ans=1;
    vi vec;
    for(int i=1;i*i<=x;i++)
    if(x%i==0) {vec.pb(i); vec.pb(x/i);}
    s(vec);
    for(auto i:vec)
    {
        if(x<i*1ll*n) break;
        if((x-i*1ll*n)%i==0) ans=i;
    }

    cout<<ans<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}