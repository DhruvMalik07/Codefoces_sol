#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        int m,n;cin>>m>>n;
        int a[m],b[n];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int dp[m][n];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<a[i];j++) dp[i][j]=0;
            for(int j=a[i]+1;j<n;j++) dp[i][j]=1;
        } 
        
        // Check if values didn't contradict themselves
        bool flag=true;
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<b[i];j++) 
            {
                if(dp[j][i]==-1) flag=false; 
                dp[j][i]=0;
            }
            if(b[i]<m && dp[b[i]][i]==0) flag=false; 
            for(int j=b[i]+1;j<m;j++) dp[j][i]++;
        } 
        
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) if(dp[i][j]==2) c++;
        }

        if(!flag) { cout<<0; continue; } 
        ll ans=1;
        for(int i=0;i<c;i++) ans=(ans*2)%1000000007;
        cout<<ans<<endl;
    }
    return 0;
}