#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n,k,m;cin>>n>>k>>m;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    vvi count(m,vi());
    for(auto i:a)
    count[i%m].pb(i);

    for(int i=0;i<m;i++)
    {   
        if(count[i].size()>=k)
        {
            cy;
            for(int j=0;j<k;j++) cout<<count[i][j]<<" ";

            return;
        }
    }
    cn;
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}