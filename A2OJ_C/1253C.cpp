#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>

void solve()
{
    ll n,m;cin>>n>>m;
    vll a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll ans[n];
    ans[0]=a[0];
    for(int i=1;i<m;i++) ans[i]=ans[i-1]+a[i];
    if(n>m) ans[m]=ans[m-1]+a[m]+a[0];

    for(int i=m+1;i<n;i++) ans[i]=ans[i-1]+a[i]+(ans[i-m]-ans[i-m-1]);
    
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";

}

int main()
{
    solve();
    
    return 0;
}