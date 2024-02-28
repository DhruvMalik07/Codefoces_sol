// Incorrect
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
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    vi b=a;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++) 
    {
        if(a[i]!=b[i] && __gcd(a[i],b[i])!=b[0]) {cn;return;}
        
    }
    cy;return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}