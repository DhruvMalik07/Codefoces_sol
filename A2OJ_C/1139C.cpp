// Accepted 
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
 
const ll N = 2e5 + 5;
const ll MOD = 1e9 + 7;
 
ll pow(ll a, ll b, ll m)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}
 
ll n, k, sz, ans = 0;
bool vis[N];
vector<int> g[N];
 
void dfs(int u)
{
	if(vis[u]) return;
	sz++;
	vis[u] = 1;
	for(auto &it:g[u])
	dfs(it);
}
 
void solve()
{
    cin>>n>>k;
	ll ans = pow(n, k, MOD);
	for(int i=1;i<=n-1;i++)
	{
		int u, v, x;
		cin>>u>>v>>x;
		if(x == 0)
		g[u].push_back(v), g[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]) continue;
		sz = 0;
		dfs(i);
		ans -= pow(sz, k, MOD);
		ans += MOD;
		ans %= MOD;
	}
	cout<<ans;
    return;
}

int main()
{
    solve();
    
    return 0;
}