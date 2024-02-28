// Working
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n,m;cin>>n>>m;
    int a[n+1]={0};
    while(m--)
    {
        int x,y; cin>>x>>y;
        a[x]++, a[y]++;
    }
    map<int,int> mp;
    for(int i=1;i<n+1;i++) mp[a[i]]++;
    
    int x=-1,y=-1;
    for(auto [i,j]:mp)
    {
        if(j==1) x=i;
        else y=i-1;
    }
    if(x==-1) x=y+1;
    cout<<x<<" "<<y<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}