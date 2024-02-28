// stuck on some edge case 
// test 3 75/1k
// cause -> use ll everywhere

// working
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
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
    s(a);

    ll x=0;
    for(int i=1;i<n;i++) x = __gcd(abs(a[i]-a[i-1]),x);
    //cout<<x<<endl;
    x=max(x,1LL);
    
    if(abs(a[n-1]-a[0])/x == n-1) 
    {
        ll maxi=a[n-1]+x;
        ll sum=0;
        for(auto i:a)
        sum+=(abs(maxi-i))/x;
        cout<<sum<<endl; return;
    }

    ll maxi=a[n-1], temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        temp-=x;
        if(a[i]!=temp) break;
    }

    ll sum=0;
    for(auto i:a)
    sum+=(abs(maxi-i))/x;

    sum+=(abs(maxi-temp))/x;
    cout<<sum<<endl; return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}