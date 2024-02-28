//
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vi ans(n,0);
    vi last(26,n);
    ans[n-1]=1;
    last[s[n-1]-'a']=n-1;
    for(int i=n-2;i>=0;i--)
    {
        ans[i]=ans[i+1]+last[s[i]-'a']-i;
        last[s[i]-'a']=i;
    }
    cout<<ans[0]<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}