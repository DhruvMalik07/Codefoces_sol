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

void DFS(int sr,vvi &adj,vb &visited,int c,vi &a,int m,int &count)
{
    if(visited[sr]) return;
    visited[sr]=true;
    
    if(c>m) return;

    if(adj[sr].size()==1 && sr!=1) {count++;return;}
    for(auto i:adj[sr])
    {
        if(!visited[i])
        DFS(i,adj,visited,(c+1)*a[i],a,m,count);
    }
    visited[sr]=false;
    return ;
}

void solve()
{
    int n,m;cin>>n>>m;
    vi a(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    vvi adj(n+1);
    for(int i=1;i<n;i++) 
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vb visited(n+1,false);
    int count=0;
    DFS(1,adj,visited,a[1],a,m,count);
    cout<<count<<endl;

    //for(auto i:a) cout<<i<<" ";
    return;
}

int main()
{
    solve();
    return 0;
}