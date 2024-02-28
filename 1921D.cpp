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
void solve()
{
    int n,m;cin>>n>>m;
    vi a(n,0), b(m,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    s(a); sort(b.rbegin(),b.rend());
    
    int i=0,j=0,l=n-1,k=m-1,temp=n;
    ll ans=0;
    while(temp--)
    {
        int x,y,o,p;
        x=abs(a[i]-b[j]);
        y=abs(a[i]-b[k]);
        o=abs(a[l]-b[j]);
        p=abs(a[l]-b[k]);
        if(x>y && x>o && x>p) i++,j++,ans+=x;
        else if(y>o && y>p) i++,k--,ans+=y;
        else if(o>p) l--,j++,ans+=o;
        else l--,k--,ans+=p;
    }
    cout<<ans<<endl;
}
1903
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}