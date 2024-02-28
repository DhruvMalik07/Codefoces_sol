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
    int n;cin>>n;
    vi disobey (n,0);
    vi ans;
    vvi adj(n,vi());

    for(int i=0;i<n;i++) 
    {
        int x,y;cin>>x>>y;
        if(x==-1) continue;
        adj[x-1].pb(i);
        if(y==1) disobey[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(disobey[i]==1){
        bool flag=true;
        for(auto j:adj[i])
        {
            if(disobey[j]==0)  flag=false;
        }
        if(flag)
        {
            ans.pb(i+1);
        }}
    }
    /*
    int p=0;
    for(auto i:adj)
    {
        cout<<p++<<" ";
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
    */
    
    if(ans.size()==0) cout<<-1;
    else for(auto i:ans) cout<<i<<" ";
    
    return ;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}7