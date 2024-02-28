//wrong ans
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vd vector<double>
#define pb push_back
void solve()
{
    int n,m,k;cin>>n>>m>>k;
    vi a(n,0);
    vi b(m,0);
    ll sum=0;
    int mini=INT_MAX;
    int maxi=INT_MIN,maxi_a=INT_MAX;
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i]; mini=min(mini,a[i]);maxi_a=max(maxi_a,a[i]);}
    for(int i=0;i<m;i++) {cin>>b[i]; maxi=max(maxi,b[i]);}

    if(k%2) sum+= max(0,maxi-mini);
    if(k%2==0 && maxi_a>maxi) sum+=-(maxi_a-maxi); 
    cout<<sum<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}