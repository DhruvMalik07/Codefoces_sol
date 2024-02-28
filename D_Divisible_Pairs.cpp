// wrong
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    vi a(n,0);
    f(n) cin>>a[i];
    
    ll ans=0;
    map<pair<ll,ll>,ll> mp;
    f(n)
    {
        ll p=a[i]%x;
        ll q=a[i]%y;

        ans+=mp[{x-p,q}];
        if(p==0) p=x;
        mp[{p,q}]++;
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