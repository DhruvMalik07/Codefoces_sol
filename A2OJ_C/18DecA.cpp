// Working 
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
    string s; cin>>s;
    int n=s.size(),i=0;
    for(;i<n-1;i++)
    if(s[i+1]!='0') break;
    
    string a=s.substr(0,i+1);
    string b=s.substr(i+1);
    if(a.size()>b.size()) cout<<-1<<endl;
    else if(a.size()==b.size() && a>=b)cout<<-1<<endl;
    else cout<<a<<" "<<b<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}