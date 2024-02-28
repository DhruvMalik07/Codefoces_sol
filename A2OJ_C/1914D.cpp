#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<pair<int,int>> 
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a,b,c;
    int x,l=0;
    for(l=0;l<n;l++) {cin>>x; a.pb({x,l});}
    for(l=0;l<n;l++) {cin>>x; b.pb({x,l});}
    for(l=0;l<n;l++) {cin>>x; c.pb({x,l});}
    
    //could be optimized by just finding greates three values of each array 
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    sort(b.begin(),b.end(),greater<pair<int,int>>());
    sort(c.begin(),c.end(),greater<pair<int,int>>());

    int ans=INT_MIN;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second) 
                ans=max(ans,a[i].first+b[j].first+c[k].first);
            }
        }
    }
    cout<<ans<<endl;
    

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
