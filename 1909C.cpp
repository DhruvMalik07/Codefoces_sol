//Wrong
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
    int n;cin>>n;
    vi a(n,0), b(n,0), c(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];

    s(a); s(b);
    sort(c.begin(),c.end(),greater<int>());
    for(int i=0;i<n;i++) a[i]=b[i]-a[i];
    s(a);

    ll ans=0;
    for(int i=0;i<n;i++) ans+=c[i]*a[i];

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

/*
test case
5
81217 81570 20439 46555 23390
160683 176054 160994 97805 184462
9 3 1 8 4
*/