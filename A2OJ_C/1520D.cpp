#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void solve()
{
    int n;cin>>n;
    vi a(n,0);
    map<int,int> m;
    ll ans=0;
    for(int i=0;i<n;i++) {cin>>a[i]; a[i]-=i; m[a[i]]++;}
    
    for(auto [i,j]:m) ans+= 1ll*j*(j-1)/2;

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