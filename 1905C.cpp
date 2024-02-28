/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;

    map<char,int> mp;
    for(auto i:s) mp[i]++;

    string sorteds=s;
    s(sorteds);
    if(s==sorteds) {cout<<0<<endl; return;}

    string rstr=s;
    sort(rstr.rbegin(),rstr.rend());
    //cout<<rstr<<endl;

    string maxistr="";
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(mp[rstr[j]]<=0) 
        {
            while(mp[rstr[j]]<=0) j++;
        }
        if(s[i]==rstr[j]) maxistr+=s[i], j++;
        mp[s[i]]--;
    }

    j=0;
    int m=maxistr.size(),ct=0;
    vi vec; 
    for(int i=0;i<n;i++)
    if(maxistr[j]==s[i]) vec.pb(i),j++;

    for(int i=0;i<vec.size();i++)
    s[vec[i]]=maxistr[m-1-i];

    for(int i=0;i<m-1;i++)
    {
        if(maxistr[i]==maxistr[i+1])ct++;
        else break;
    }
    
    if(s==sorteds) cout<<m-1-ct<<endl;
    else cout<<-1<<endl;

    return;


}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
*/
// optimized

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;

    map<char,int> mp;
    for(auto i:s) mp[i]++;

    string sorteds=s;
    s(sorteds);
    if(s==sorteds) {cout<<0<<endl; return;}

    stack<char> st;
    for (int i = 0; i < n; i++) 
    {
        while (!st.empty() && s[i] > st.top())
            st.pop();
        st.push(s[i]);
    }
    string res = "";
    while (!st.empty()) 
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());

    int j=0, m=res.size(),ct=0;
    vi vec; 
    for(int i=0;i<n;i++)
    if(res[j]==s[i]) vec.pb(i),j++;

    for(int i=0;i<vec.size();i++)
    s[vec[i]]=res[m-1-i];

    for(int i=0;i<m-1;i++)
    {
        if(res[i]==res[i+1])ct++;
        else break;
    }
    
    if(s==sorteds) cout<<m-1-ct<<endl;
    else cout<<-1<<endl;

    return;


}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
