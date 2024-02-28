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
    int m=n*(n-1)/2;
    vi a(m,0), ans(n,0);
    for(int i=0;i<m;i++) cin>>a[i];

    map<int,int> mp;
    for(auto i:a) mp[i]++;

    int k=0,x=n-1;
    for(auto [i,j]:mp)
    {
        while(j!=0)
        {
            ans[k++]=i;
            j-=x;
            x--;
        }
    }
    if(n>1) ans[n-1]=ans[n-2];
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}