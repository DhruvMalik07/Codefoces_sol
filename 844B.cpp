
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    int row[n],col[m];
    int count=0;
    
    for(int i=0;i<n;i++) 
    {
        count=0;
        for(int j=0;j<m;j++)  { if(a[i][j]==1) count++; }

        row[i]=count;
    }

    for(int i=0;i<m;i++) 
    {
        count=0;
        for(int j=0;j<n;j++)  { if(a[j][i]==1) count++; }
        
        col[i]=count;
    }

    ll sum=n*m;
    for(int i=0;i<n;i++) sum+= pow(2,row[i])-1-row[i] + pow(2,m-row[i])-1-(m-row[i]);
    for(int i=0;i<m;i++) sum+= pow(2,col[i])-1-col[i] + pow(2,n-col[i])-1-(n-col[i]);

    cout<<sum<<endl;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}