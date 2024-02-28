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
#define M 1000000007
void solve()
{
    int n;cin>>n;
    int x=max(7,n+1);
    ll dp[x];
    dp[1]=1;
    dp[2]=2;
    dp[3]=1+dp[1]+dp[2];
    dp[4]=1+dp[1]+dp[2]+dp[3];
    dp[5]=1+dp[1]+dp[2]+dp[3]+dp[4];
    dp[6]=1+dp[1]+dp[2]+dp[3]+dp[4]+dp[5];
    for(int i=7;i<=n;i++)
    dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%M;

    cout<<dp[n];
    return;
}

int main()
{
    solve();
    
    return 0;
}