// wrong and for some test cases
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

bool check(vvi &a, int k)
{
    int mini=0,maxi=0;
    for(int i=0;i<a.size();i++)
    {
        mini=max(mini-k,a[i][0]);
        maxi=min(maxi+k,a[i][1]);
        if(mini>maxi) return false;
    }
    return true;
}

void solve()
{
    int n;cin>>n;
    vvi a(n,vi(2,0));
    for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
    
    int l=0,r=1e9,ans=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(check(a,mid)) r=mid-1,ans=mid;
        else l=mid+1;
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