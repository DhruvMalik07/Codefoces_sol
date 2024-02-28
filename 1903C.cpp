// Wrong
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
    ll n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans1=0,ans2=0, k=0,x;

    if(a[0]>0) x=0;
    else x=1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>0) x++;
        k++;
        ans1+=1ll*k*a[i]; 
        ans2+=1ll*x*a[i];
    }
    cout<<max(ans1,ans2)<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}