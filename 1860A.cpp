#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())>
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
    int n=s.size();
    string a,b;
    
    for(int i=0;i<n;i++) a+='(';
    for(int i=0;i<n;i++) a+=')';
    for(int i=0;i<n;i++) b+="()";
    
    if(a.find(s)==std::string::npos) {cy;cout<<a<<endl;}
    else if(b.find(s)==std::string::npos)  {cy;cout<<b<<endl;}
    else cn;
    return;
    
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}