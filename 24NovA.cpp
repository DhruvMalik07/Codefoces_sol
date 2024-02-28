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
void solve()
{
    int n,x;cin>>n>>x;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    int maxi =max(a[0],2*(x-a[n-1]));
    for(int i=0;i<n-1;i++) maxi=max(maxi,a[i+1]-a[i]);
 
   cout<<maxi<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}