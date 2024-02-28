#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back

ll sum(ll n)
{
    return 1ll*n*(n+1)/2;
}

void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    ll lcm=1ll*x*y/__gcd(x,y);
    ll common=n/lcm;
    ll a=n/x -common, b=n/y-common;
    ll first=sum(n)-sum(n-a);
    ll sec=sum(b);

    cout<<first-sec<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}