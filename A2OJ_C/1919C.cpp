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
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> s,p;
    s.pb(a[0]);
    int ans=0;
    for(int i=1;i<n;i++)
    {
        ll x=s.back(),y;
        if(p.size()==0) y=INT_MAX;
        else y=p.back();

        if(a[i]<=x && a[i]<=y)
        {
            if(x<y)s.pb(a[i]);
            else p.pb(a[i]);
        }
        else if(a[i]<=x) s.pb(a[i]);
        else if(a[i]<=y) p.pb(a[i]);
        else
        {
            if(x<y)s.pb(a[i]);
            else p.pb(a[i]);
            ans++;
        }
    }
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