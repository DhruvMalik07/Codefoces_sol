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
    int n,k; cin>>n>>k;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(n==k) cout<<a[n-1]+1<<endl;
    else if(k==0 && a[0]!=1) cout<<1;
    else if(k==0 && a[0]==1) cout<<-1; 
    else if(a[k-1]<a[k]) cout<<a[k-1];
    else cout<<-1;
    return;
}

int main()
{
    solve();
    
    return 0;
}