//copied
// wrong
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
    long long int n,l,r; cin >> n >> l >> r;
    long long int dp[n+1][3];
    dp[1][0]=r/3-(l-1)/3;
    dp[1][1]=(r+2)/3-(l+1)/3;
    dp[1][2]=(r+1)/3-l/3;

    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                dp[i][(j+k)%3]=(dp[i][(j+k)%3]+dp[i-1][j]*dp[1][k]) %MOD;
            }
        }
    }
    cout<<dp[n][0]<<endl;
    return 0;
}