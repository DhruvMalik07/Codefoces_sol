#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
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
    ll n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    map<double,int> mp;
    //for(auto i:a) mp[1.0*(1<<i)/i]++;
    for(auto i:a) mp[1.0*(i-log2(i))]++;

    ll sum=0;
    for(auto [i,j]:mp)
    sum+= 1ll*(j-1)*j/2;

    cout<<sum<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}