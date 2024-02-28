// wrong on test 2
/*
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
    vi a(n,0);
    f(n) cin>>a[i];
    if(n==1) {cout<<a[0]<<endl; return;}

    ll preprev=max(0ll,a[0]);
    ll prev=max(preprev,a[1]);
    for(int i=2;i<n;i++)
    {
        ll res=max(prev,preprev+a[i]);
        preprev=prev;
        prev=res;
    }
    ll ans=max(prev,preprev);
    if(all_of(a.begin(),a.end(),[](ll x){return x<0;})) 
    cout<<*max_element(a.begin(),a.end())<<endl;
    else
    cout<<max(prev,preprev)<<endl; 
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
*/
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
    vi a(n,0);
    f(n) cin>>a[i];
    ll odd=0,even=0;
    f(n)
    {
        if(i&1) odd+=max(0ll,a[i]);
        else    even+=max(0ll,a[i]);
    }

    if(all_of(a.begin(),a.end(),[](ll x){return x<0;})) 
    { cout<<*max_element(a.begin(),a.end())<<endl; return; }

    cout<<max(even,odd)<<" ";
    cout<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}