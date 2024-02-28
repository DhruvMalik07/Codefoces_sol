// wrong on test case 4
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define vvi vector<vector<long long int>>
#define vi  vector<long long int>
#define vb  vector<bool>

double DFS(vvi &adj, int sr,vb &flag)
{
    flag[sr]=true;
    double res=0, child=0;
    if (adj[sr].size() == 1) return 0;

    for (auto &j : adj[sr]) 
    {
        if(flag[j]) continue;
        child++;
        res+=DFS(adj, j, flag);
    }

    return (res/child) +1;
}

void solve()
{
    ll n; cin>>n;
    vi vec;
    vb flag(n+1,false);
    vvi adj(n + 1, vi());
    ll x, y;
    for (ll i = 0; i < n - 1; i++) 
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<setprecision(15)<< DFS(adj, 1, flag);
}

int main()
{
    int t = 1;
    while (t--) 
    solve();

    return 0;
}

// Working
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<long long int>
#define N 100100

vI adj[N];
double ans=0;

void DFS(int s, int parent, double p, int len)
{
    bool flag=0;

    if (adj[s].size() > 1)
    {
        if(parent == -1)  p/= adj[s].size();
        else              p/= (adj[s].size()-1);
    }

    for (auto &j : adj[s]) 
    {
        if(j != parent) 
        {
            flag=1;
            DFS(j, s, p, len+1);
        }
    }

    if(!flag) ans+=len*p;
}

void solve()
{
    ll n; cin>>n; 
    ll x, y;
    for (ll i = 0; i < n - 1; i++) 
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    DFS( 1, -1, 1.0, 0);
    cout <<setprecision(15) <<ans << endl;
}

int main()
{
    solve();

    return 0;
}
*/