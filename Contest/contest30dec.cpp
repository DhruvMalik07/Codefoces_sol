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
    int n,m;cin>>n>>m;
    /*
    for(int i=2;i<m;i++)
    {
        if(m%i==0) {cout<<i*m<<endl;return;}
    }
    if(n==1) cout<<1ll*m*m<<endl;
    else cout<<1ll*n*m<<endl;
    */
   ll GCD=__gcd(n,m);
   ll ans;
   if(n==1) ans=1ll*m*m;
   else if(n==GCD) ans=(1ll*m*m)/n;
   else ans=(1ll*n*m)/GCD;
   cout<<ans<<endl;
   return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}