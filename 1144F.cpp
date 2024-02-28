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
    int n,m;cin>>n>>m;
    vvi adj(n+1,vi());
    //vvi org(n+1,vi());
    vi a(m,0);
    for(int i=0;i<m;i++) 
    {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
        a[i]=x;
        //org[x].pb(y);
    }

    vi vec(n+1,-1);
    queue<int>q;
    q.push(1);
    vec[1]=1;
    bool flag=true;
    while(!q.empty() && flag)
    {
        auto temp=q.front();
        q.pop();
        int val=1;
        if(vec[temp]) val=0;
        for(int i=0;i<adj[temp].size();i++)
        {
            int x=adj[temp][i];
            if(vec[x]!=-1 && vec[x]==vec[temp]) {flag=false;break;}
            if(vec[x]==-1) {q.push(x);vec[x]=val;}
        }
    }

    //for(auto i:vec) cout<<i<<" ";
    //cout<<endl;
    if(!flag) {cn;return;}
    cy;
    for(int i=0;i<m;i++)
    {
        if(vec[a[i]]==1) cout<<0;
        else cout<<1;
    }
    return;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}