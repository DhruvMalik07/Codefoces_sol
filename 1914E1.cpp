/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
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
    ll n;cin>>n;
    multimap<ll,vi,greater<ll>> mp; 
    vi a(n,0), b(n,0);
    f(n) cin>>a[i];
    f(n) cin>>b[i];

    //f(n) mp[a[i]+b[i]].pb(a[i]), mp[a[i]+b[i]].pb(b[i]);
    f(n) mp.insert({a[i] + b[i], {a[i], b[i]}}); 
    ll ans=0,k=0;
    for(auto [i,j]:mp)
    {
        //cout<<i<<" "<<j[0]<<" "<<j[1]<<endl;
        if(k&1) ans+= -(j[1]-1);
        else    ans+=j[0]-1;  
        k++;  
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
*/

// Optimized
// same run time but space optimized
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
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
    ll n;cin>>n;
    pair<ll,ll> mp[n];
    vi a(n,0), b(n,0);
    f(n) cin>>a[i];
    f(n) cin>>b[i];

    f(n) mp[i]=make_pair(a[i] + b[i],i); 
    sort(mp,mp+n,greater<pair<ll,ll>>());
    ll ans=0,k=0;

    for(auto [i,j]:mp)
    {
        if(k&1) ans+= -(b[j]-1);
        else    ans+=a[j]-1;  
        k++;  
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