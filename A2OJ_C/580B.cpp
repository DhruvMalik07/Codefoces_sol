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
    ll n,d;cin>>n>>d;
    pair<ll,ll> p[n];
    for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;
    sort(p,p+n);

    ll ans=p[0].second, sum=p[0].second, index=0;
    for(int i=1;i<n;i++)
    {
        sum+=p[i].second;
        while(p[i].first-p[index].first>=d)
        sum-=p[index++].second;
        
        ans=max(ans,sum);
    } 
    cout<<max(ans,sum)<<endl;
}

int main()
{
    solve();
    
    return 0;
}