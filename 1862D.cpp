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
    ll l=0,r=min<ll>(2*n,2e9);
    while(r-l>1)
    {
        ll mid=(l+r)>>1;
        if(mid*(mid-1)/2 + mid <n) l=mid;
        else r=mid;
    }
    l=r;
    ll y=n-l*(l-1)/2;
    if(l*(l+1)/2 <=n)
    cout<<min(l+y,l+1+n-l*(l+1)/2)<<endl;
    else cout<<l+y<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}