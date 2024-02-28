#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<long long int>
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
    if(maxi==mini) {cout<<0<<endl;return;}
    
    vector<int> res;
    while (mini != maxi) 
    {
        res.push_back(mini % 2);
        mini = (mini + res.back()) / 2;
        maxi = (maxi + res.back()) / 2;
    }
    
    cout<<res.size()<<endl;

    if(res.size()<=n)
    for(auto i:res) cout<<i<<" ";
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