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
    ll n,k;cin>>n>>k;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    if(k>=3) cout<<0<<endl;
    else if(k==1)
    {
        sort(a.begin(),a.end());
        ll mini=a[0];
        for(int i=1;i<n;i++)
        mini=min(mini,a[i]-a[i-1]);

        cout<<mini<<endl;
    }
    else
    {
        sort(a.begin(),a.end());
        ll mini=a[0];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                ll temp=a[i]-a[j];
                mini=min(mini,temp);
                int index=lower_bound(a.begin(),a.end(),temp)-a.begin();
                if(index<n) mini=min(mini,a[index]-temp);
                if(index>0) mini=min(mini,temp-a[index-1]);
            }
        }
        cout<<mini<<endl;
    }
    
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}