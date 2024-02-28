// correct
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vs vector<string>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"IMPOSSIBLE\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n;cin>>n;
    char s; cin>>s;
    bool flagcheck=false;
    vs a(2*n,"");
    f(2*n) {cin>>a[i]; if(a[i][1]==s) flagcheck=true;}
    map<char,vector<char>> mp;

    for(auto i:a) mp[i[1]].pb(i[0]);

    int temp=mp[s].size();
    int ct=0;

    for(auto [i,j]:mp) {if(i!=s) ct+=(j.size())%2;}
    if(ct>temp) {cn;return;}

    int l=0;
    vector<char> vec;
    if(flagcheck) {vec=mp[s];
    sort(vec.begin(),vec.end());}

    for(auto [i,j]:mp) 
    {
        sort(j.begin(),j.end());
        int k=0;
        int sz=j.size();
        int orgisz=sz;
        if(i==s) continue;
        while(sz>1)
        {
            cout<<j[k]<<i<<" "<<j[k+1]<<i<<endl;
            k+=2;
            sz-=2;
        }
        if(sz==1) cout<<j[orgisz-1]<<i<<" "<<vec[l++]<<s<<endl;
    }
    if(vec.size()!=0)
    {for(int i=l;i<vec.size();i+=2) cout<<vec[i]<<s<<" "<<vec[i+1]<<s<<endl;}
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}