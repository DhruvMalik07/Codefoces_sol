// Wrong
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    ll n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    if(n==1) {cout<<0<<endl;return;}
    
    ll maxi=INT_MIN, mini=INT_MAX;
    for(auto i:a) 
    {
        maxi=max(maxi,1ll*i);
        mini=min(mini,1ll*i);
    }
    ll ans=log2(maxi-mini);
    cout<<ans+1<<endl;

    if(ans<=n)
    for(int i=0;i<=ans;i++) cout<<mini<<" ";
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