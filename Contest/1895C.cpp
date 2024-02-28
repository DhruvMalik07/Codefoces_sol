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

int sum(string s)
{
    int c=0;
    while(s!="")
    {
        int len=s.size();
        c+=s[len-1]-'0';
        s=s.substr(0,len-1);
    }
    return c;
}

void solve()
{
    int n;cin>>n;
    vector<string> a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    map<int,int> m;
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].size()%2==0) even++;
        int x= sum(a[i]);
        m[x]++;
    }
    
    ll ans=0;
    for(auto [i,j]:m)
    ans+=(j*(j-1))/2;
    
    cout<<ans<<endl;

}

int main()
{
    solve();
    
    return 0;
}