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
    string s;cin>>s;
    if(s.find("444")!=s.npos) {cn;return;}

    for(auto i:s) 
    if(i!='1' && i!='4') {cn;return;}

    if(s[0]=='4') {cn;return;}

    cy;return;
}

int main()
{
    solve();
    
    return 0;
}