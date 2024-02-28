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
    ll n;cin>>n;
    int req=0;
    ll sum=0;
    vi a(n,0);
    f(n) {cin>>a[i]; sum+=a[i];}
    req=sum/n;

    sum=0;
    ll temp=0;
    f(n)
    {
        sum+=a[i];
        temp+=req;
        if(sum<temp) {cn;return;}
    }
    cy;return;


}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}