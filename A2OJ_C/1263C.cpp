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
    ll n;cin>>n;
    set<ll>s;
    for(int i=0;i<=sqrt(n);i++) s.insert(i);
    for(int i=1;i<=sqrt(n);i++)
    s.insert(n/i);

    cout<<s.size()<<endl;
    for(auto i:s) cout<<i<<" ";

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}