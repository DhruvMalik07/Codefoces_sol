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
    
    /*
    int ct=1,maxi=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) ct++;
        else ct=1;
        maxi=max(maxi,ct);
    }*/

    int maxi=1,c1=1,c2=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) c1++;
        else break;
    }
    
    for(int i=n-1;i>0;i--)
    {
        if(a[i]==a[i-1]) c2++;
        else break;
    }
    if(c1==1 && c2==1 && n>1 && a[0]==a[n-1]) c1=c1+c2; 
    else if(n>1 && a[0]==a[n-1]) c1=c1+c2;
    maxi=max(c1,c2);
    
    if(c1==2*n) cout<<0<<endl;
    else cout<<n-maxi<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}