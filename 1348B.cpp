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
    int n,k;cin>>n>>k;
    vi a(n,0);
    set<int>s;
    for(int i=0;i<n;i++) {cin>>a[i]; s.insert(a[i]);}

    if(s.size()>k) {minus;return;}
    int x=1;
    while(s.size()!=k) 
    s.insert(x++);

    cout<<k*n<<endl;
    for(int i=0;i<n;i++)
    for(auto j:s) cout<<j<<" ";
    
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}