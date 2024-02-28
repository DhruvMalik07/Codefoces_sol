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
    int n;cin>>n;
    string s;cin>>s;
    // Memory limit exceeded
    /*
    set<string> st;
    for(int i=0;i<n-1;i++) st.insert(s.substr(0,i) + s.substr(i+2)); 
    cout<<st.size()<<endl;
    */
    int ct=0;
    for(int i=0;i<n-2;i++)
    if(s[i]==s[i+2])ct++;
    cout<<n-1-ct<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}