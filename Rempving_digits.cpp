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
#define N 1e6+10
void solve()
{
    int n;cin>>n;
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;

    for(int i=10;i<=n;i++)
    {
        dp[i]=i;
        int temp=i;
        while(temp>0)
        {
            dp[i]=min(dp[i],dp[i-(temp%10)]+1);
            temp/=10;
        }
    }
    cout<<dp[n]<<endl;


}

int main()
{
    solve();
    
    return 0;
}