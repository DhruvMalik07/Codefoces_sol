#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    int n;cin>>n;
    int a[n];
    ll ans=0;
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1) {cout<<max(0,a[0]); return;}

    for(int i=2;i<n;i++) ans+=max(0,a[i]);

    if(a[0]>=0 && a[1]<=0) ans+=a[0];
    else if(a[1]>0) ans+=max(0,a[0]+a[1]); 
    
    cout<<ans<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}