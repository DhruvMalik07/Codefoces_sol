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
#define cn cout<<"-1\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll x; cin>>x;
    string s; cin>>s;
    if(x&1) {cn;return;}

    int one=0,zero=0;
    for(auto i:s) 
    {
        if (i=='1') one++;
        else zero++;
    }
    if(one!=zero) {cn;return;}
    
    vi vec;
    int r=300;
    while(r--)
    {
        int n=s.size();
        bool flag=true;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]==s[n-1-i])
            {
                string temp;
                if(s[i]=='1') 
                {
                    vec.pb(i);
                    temp=s.substr(0,i)+"01"+s.substr(i);
                    s=temp;
                }
                else
                {
                    vec.pb(n-i);
                    temp=s.substr(0,n-i)+"01"+s.substr(n-i);
                    s=temp;
                } 
                flag=false;
                break;
            } 
        }
        if(flag) break;
    }
    
    //cout<<s<<endl;
    cout<<vec.size()<<endl;
    for(auto i:vec) cout<<i<<" ";
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    //string s="abcdef";
    //cout<<s.substr(0,2)+"01"+s.substr(2);
    
    return 0;
}