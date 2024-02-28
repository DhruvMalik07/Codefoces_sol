//Wrong
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n; cin>>n;
    pair<ll,ll> p[n];
    for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    for(int i=1;i<n;i++)
    {
        if(p[i].second<p[i-1].second) {cout<<"Happy Alex\n";return;}
    }
    cout<<"Poor Alex\n"<<endl;
    return;
}

int main()
{
    
    solve();
    
    return 0;
}