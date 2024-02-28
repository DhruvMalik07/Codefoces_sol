#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vi vector<ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define pb push_back
void solve()
{
    ll n;cin>>n;
    vi a(n,0);
    f(n) cin>>a[i];
    s(a);
    if(n==1) {cy;return;}
    else if(a[n-1]==a[0]) {cn;return;}
    else if(a[0]!=a[1]){cy;return;}

    ll mini=a[0];
    bool flag=false;
    for(int i=1;i<n;i++) if(a[i]%mini!=0) {flag=true;break;}

    (flag)?cy:cn;
    
    return;
}

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    solve();
    
    return 0;
}