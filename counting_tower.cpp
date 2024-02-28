// Wrong
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
#define M 1000000007
void solve()
{
    ll n;cin>>n;
    int x=1,y=1;
    for(int i=1;i<=2*n-2;i++) x=(x*2)%M;
    for(int i=1;i<=n;i++)    y=(y*2)%M;    
    cout<<(x+y)%M<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}