#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"1895C
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    bool flag=true;
    if(is_sorted(a.begin()+3,a.begin()+4)==false)      {cn;return;} 
    if(flag=is_sorted(a.begin()+4,a.begin()+9)==false) {cn;return;} 
    if(flag=is_sorted(a.begin()+9,a.begin()+17)==false){cn;return;} 
    if(flag=is_sorted(a.begin()+16,a.begin()+21)==false){cn;return;} 
    
    cy;
    return ;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}