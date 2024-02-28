#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll count(ll x, ll n, ll a[])
{
    ll lb=upper_bound(a,a+n,x)-a;
    if(a[lb]>x) return n-lb;
    return 0;
}

void solve()
{
    ll n;cin>>n;
    ll  a1[n],a2[n];
    ll a[n];
    for(int i=0;i<n;i++) cin>>a1[i];
    for(int i=0;i<n;i++) cin>>a2[i];
    for(int i=0;i<n;i++) a[i]=a1[i]-a2[i];
    sort(a,a+n);
    ll c=0;
    for(int i=0;i<n-1;i++) 
    {
        if(a[i]>0)c+=n-i-1;
        else c+=count(-a[i],n,a);
    }
    cout<<c<<endl;
    return;
}

int main()
{
    solve();
    
    return 0;
}