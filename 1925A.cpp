#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
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
    string temp="", ans="";
    char c='a';
    for(int i=0;i<k;i++) {temp+=c; c++;}
    for(int i=0;i<n;i++) ans+=temp;
    cout<<ans<<endl;
    return ;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}