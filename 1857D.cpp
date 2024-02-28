#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
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
    vi a(n,0), b(n,0);
    f(n) cin>>a[i];
    f(n) cin>>b[i];
    ll maxi=LONG_MIN;
    f(n) a[i]=a[i]-b[i], maxi=max(a[i],maxi);

    vi vec;
    for(int i=0;i<n;i++) if(a[i]==maxi) vec.pb(i+1);

    cout<<vec.size()<<endl;
    for(auto i:vec) cout<<i<<" ";
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}