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
    int n,m;cin>>n>>m;
    int grid[n][m];
    for(int i=0;i<min(m-1,n);i++)
    {
        for(int j=0;j<m;j++)
        grid[i][j]=(j+i)%m;
    }
    if(m-1<n)
    {
        for(int i=m-1;i<n;i++)
        {
            for(int j=0;j<m;j++) 
            grid[i][j]=j;
        }
    }
    if(m==1) cout<<0<<endl;
    else cout<<min(m,n+1)<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        cout<<grid[i][j]<<" ";

        cout<<endl; 
    }
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}