#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define f(n) for(int i=0;i<n;i++)
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n,k;cin>>n>>k;
    vi a(n,0);
    f(n) cin>>a[i];
    
    for(int i=1;i<n;i++) a[i]+=a[i-1];
    
    int maxi=INT_MIN;
    for(int i=0;i<n;i++) 
    {
        int y=0;
        if(i!=0)y=a[i-1];
        int x=upper_bound(a.begin(),a.end(),y+k)-a.begin()-i;
        maxi=max(maxi,x);
    }
    cout<<maxi<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}