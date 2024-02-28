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
    int n,sum;cin>>n>>sum;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    /*
    int dp[sum+1][n+1];
    for(int i=0;i<=n;i++) dp[0][i]=1;
    for(int i=1;i<=sum;i++) dp[i][0]=0;

    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(a[j-1]<=i) dp[i][j]+=dp[i-a[j-1]][j];
        }
    }
    if(dp[sum][n]==0) dp[sum][n]=-1;
    cout<<dp[sum][n];
    */
    
    vi dp(sum+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0 && dp[i-a[j]]!=INT_MAX)
            dp[i]=min(dp[i],dp[i-a[j]]+1);
        }
    }
    if(dp[sum]==INT_MAX) dp[sum]=-1;
    cout<<dp[sum];
    return;
}

int main()
{
    solve();
    
    return 0;
}