// This approach will solve it mathematically
/*
#include<bits/stdc++.h>
using namespace std;
#define M 10000000007
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
void solve()
{
    vi vec;
    string s;cin>>s;
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='m'||s[i]=='w') {cout<<0; return;}
        
        if(s[i]=='n')
        {
            int c=1;
            while(i<s.size())
            {
                i++;
                if(s[i]=='n') c++;
                else {vec.pb(c);i--;break;}
            }
        }
        
        if(s[i]=='u')
        {
            int c=1;
            while(i<s.size())
            {
                i++;
                if(s[i]=='u') c++;
                else {vec.pb(c);i--;break;}
            }
        }
    }
    // need to find mathematical formula to solve it 
    // -> nC0 + n-1C1 + n-2C2...... till we can form pairs 
    for(auto i:vec) cout<<i<<" ";
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M  1000000007
#define vi vector<int>
#define pb push_back
void solve()
{
    string s;cin>>s;
    int n=s.size();
    vi dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    
    for(auto i:s) { if(i=='m'||i=='w') {cout<<0; return;}}

    for(int i=2;i<=n;i++)
    {   
        dp[i]=dp[i-1];

        if((s[i-1]=='n' || s[i-1]=='u') && s[i-1]==s[i-2])
        dp[i]=(dp[i-2]+dp[i])%M;
    }
    cout<<dp[n]<<endl;
    return;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}