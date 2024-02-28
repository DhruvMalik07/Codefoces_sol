#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vs vector<string>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"Sasha\n"
#define cn cout<<"Anna\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n,m;cin>>n>>m;
    vs a(n,"");
    ll sum=0;
    f(n) cin>>a[i]; 
    vi vec;
    f(n)
    {
        int len=a[i].size(), ct=0;
        sum+=len;
        for(int j=len-1;j>=0;j--)
        {
            if(a[i][j]=='0')ct++;
            else break;
        }
        vec.pb(ct);
    }
    sort(vec.begin(),vec.end(),greater<ll>());

    for(int i=0;i<vec.size();i+=2) sum-=vec[i];
    if(sum>m) cy;
    else cn;
    return;


}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}