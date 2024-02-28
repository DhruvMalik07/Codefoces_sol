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
    ll n,k;cin>>n>>k;
    vi a(n,0);
    vi b(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++) p.pb({b[i],a[i]});
    ll count=1;
    ll cost=k;
    
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)
    {
        int rs=p[i].first;
        int c=p[i].second;
        if(rs>=k) {cost+=k*(n-count);break;}
        else if(count+c<=n) {cost+=rs*c;count+=c;}
        else if(count+c==n) break;
        else 
        {cost+=rs*(n-count);break;}
    }
    //for(auto &i:p) cout<<i.first<<" "<<i.second<<endl;
    cout<<cost<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}