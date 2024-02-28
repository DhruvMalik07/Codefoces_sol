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
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    
    int ans=a[0];
    int maxe=b[0];
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=ans && b[i]>=maxe) flag=false;
    }

    if(flag) cout<<ans<<endl;
    else cout<<"-1\n"; 

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}