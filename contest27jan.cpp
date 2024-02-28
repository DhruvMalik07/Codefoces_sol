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
    int x,n;cin>>x>>n;
    int l=1,r=x,ans=1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        double y=1.0*x/mid - n;
        if(y==ceil(y) && y>=0) ans=mid;

        if(y>=0) l=mid+1;
        else r=mid-1;
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