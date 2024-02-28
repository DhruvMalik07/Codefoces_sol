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
    int N= (1<<30)-1;
    int a[n];
    fill_n(a,n,N);
    //for(auto i:a) cout<<i<<"\n";
    int grid[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) cin>>grid[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=29;k>=0;k--)
            {
                if((grid[i][j]&(1<<k))==0) 
                {
                    a[i]=a[i]&(~(1<<k));
                    a[j]=a[j]&(~(1<<k));
                }
            }
        }    
    }
    //for(auto i:a) cout<<i<<" ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]|a[j])!=grid[i][j]) {cn; return;}
        }
    }
    cy;
    for(auto i:a) cout<<i<<" ";
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