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
        // fv->front view , lv->left view , tv->top view
        int n,m,h;cin>>n>>m>>h;
        int fv[m];
        for(int i=0;i<m;i++) cin>>fv[i];
        int lv[n];
        for(int i=0;i<n;i++) cin>>lv[i];
        int tv[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) cin>>tv[i][j];
        } 

        int ans[n][m];
        memset(ans,0,sizeof(ans));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) 
            {
                if(lv[i]<=fv[j] && tv[i][j]==1) ans[i][j]=lv[i];
                else if(lv[i]>=fv[j] && tv[i][j]==1) ans[i][j]=fv[j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) cout<<ans[i][j]<<" ";
            cout<<endl;
        }

         
    }
    return 0;
}