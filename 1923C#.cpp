#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

void solve()
{
    ll n;cin>>n;
    ll q; cin>>q;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    vi sum(n+1,0);
    vi one(n+1,0);
    for(int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i-1];
    for(int i=1;i<=n;i++) {one[i]=one[i-1]; if(a[i-1]==1) one[i]++;} 

    while(q--)
    {
        ll x,y; 
        cin>>x>>y;
        int len=y-x+1;
        if(x==y) cn;
        else 
        {
            ll net=sum[y]-sum[x-1];
            ll one_ct=one[y]-one[x-1];
            if(net<1ll*one_ct*2+len-one_ct) cn;
            else cy;
        }
    }
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}