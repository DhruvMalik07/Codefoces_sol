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
    vi vec;
    vec.pb(n);
    
    int lim=log2(n);
    for(int i=0;i<lim;i++)
    if(n&(1<<i)) {n=n-(1<<i);vec.pb(n);}
    
    while(n!=1)
    {
        vec.pb(n/2);
        n/=2;
    }
    cout<<vec.size()<<"\n";
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