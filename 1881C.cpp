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
    int ans=0;
    vector<string> a(n,"");
    for(int i=0;i<n;i++) cin>>a[i];
    while(1)
    {
        bool flag =false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]>a[j][n-1-i])
                {
                    ans+=a[i][j]-a[j][n-1-i];
                    a[j][n-1-i]=a[i][j];
                    flag=true;
                }
                else if(a[i][j]<a[j][n-1-i])
                {
                    ans+=abs(a[i][j]-a[j][n-1-i]);
                    a[i][j]=a[j][n-1-i];
                    flag=true;
                }
            }
        }
        if(!flag) break;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}