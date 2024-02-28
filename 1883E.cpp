// wrong
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back

void solve()
{
    int n;cin>>n;
    vi a(n,0) , multi(n,0);
    multi[0]=1;
    int ans=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1]) continue;
        else
        {
            int x = ceil(log2(1.0*a[i-1]/a[i]));
            ans+=x+multi[i-1];
            multi[i]=x+multi[i-1];
            
            //ll multi=1ll<<x;
            //for(int j=0;j<x;j++)
            //a[i]*=2;
            ans+=x;
        }
    }
    //for(auto i:a) cout<<i<<" ";
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