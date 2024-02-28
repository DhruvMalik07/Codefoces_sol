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

bool check(vi& a)
{
    for(int i=0;i<a.size()-1;i++) if(a[i]>a[i+1]) return false;
    return true;
}

void solve()
{
    int n;cin>>n;
    vi a(n,0);
    vi b(n,0);
    int z=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {cin>>b[i]; if(b[i]==0) z++;}

    if(z!=0 && z!=n) cy;
    else if (check(a)) cy;
    else cn;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}