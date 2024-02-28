#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(n) for(ll i=0;i<n;i++)
#define vi vector<ll>
void solve()
{
    ll n;cin>>n;
    vi a(n,0);
    f(n) cin>>a[i];
    vi sum(n+1,0);
    f(n) sum[i+1]=sum[i]+a[i];
    int qu;cin>>qu;
    
    while(qu--)
    {
        int l,u;cin>>l>>u;
        int r=lower_bound(sum.begin(),sum.end(),u+sum[l-1])-sum.begin();
        if(r==n+1) r--;
        else if(u+sum[l-1]-sum[r-1]<=(sum[r]-sum[r-1]-1)/2) r--;  
        cout<<max(l,r)<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    solve();
    
    return 0;
}