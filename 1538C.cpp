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
    int n,l,r;cin>>n>>l>>r;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();
        sum-=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
    }
    cout<<sum<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}