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
    ll n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    ll minia=INT_MAX, minib=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(minia>a[i]) minia=a[i];
        if(minib>b[i]) minib=b[i];
    }
    ll x=n*minib, y=n*minia;
    for(int i=0;i<n;i++)
    {
        x+=a[i];
        y+=b[i];
    }
    cout<<min(x,y)<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}