// error in logic implementation
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
    string s;cin>>s;
    ll len=s.size();
    ll n;cin>>n;
    ll temp=n;
    int c=0;
    while(temp>len)
    {
        temp-=len;
        len--;
        c++;
    }

    stack<char>st;
    int i=0;
    while(c>0)
    {
        if(i>=s.size()) break;
        else if(st.empty()||st.top()<s[i]) st.push(s[i++]);
        else {i++;c--;}
    }
    string ans="";
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    cout<<ans[temp-1];

    return ;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}