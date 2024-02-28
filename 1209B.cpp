// Wrong on test 3
#include<bits/stdc++.h>
using namespace std;
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
#define N 50
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vi a(n,0);
    vi b(n,0);
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    int grid[n][60];
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') 
        {
            int val=1;
            for(int j=0;j<b[i];j++)
            grid[i][j]=val;

            for(int k=0;k<N;k++)
            {
                int l=b[i]+a[i]*k;
                if(l>=N) break;
                if(val==0) val=1; else val=0;
                for(int j=l;j<l+a[i] && j<N;j++)
                grid[i][j]=val;
            }
        }
        else
        {
            int val=0;
            for(int j=0;j<b[i];j++)
            grid[i][j]=val;
            
            for(int k=0;k<N;k++)
            {
                int l=b[i]+a[i]*k;
                if(l>=N) break;
                if(val==0) val=1; else val=0;
                for(int j=l;j<l+a[i] && j<N;j++)
                grid[i][j]=val;
            }
        }
    }
    int maxi=0;
    for(int i=0;i<N;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(grid[j][i]==1) c++;
            maxi=max(maxi,c);
        }
    }

    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        cout<<grid[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<maxi;
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}