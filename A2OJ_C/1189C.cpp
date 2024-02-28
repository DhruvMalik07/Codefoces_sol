// Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void solve()
{
    int n;cin>>n;
    vi a(n,0);
    vector<ll> sum(n+1,0);
    for(int i=0;i<n;i++) {cin>>a[i]; sum[i+1]=sum[i]+a[i];}
    int q;cin>>q;
    while(q--)
    {
        int x,y;cin>>x>>y;
        if(x==y) cout<<0<<endl;
        else 
        cout<<(sum[y]-sum[x-1])/10<<endl; 
    }
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}