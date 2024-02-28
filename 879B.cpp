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
    int n,k;cin>>n>>k;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    if(k>=n-1) {cout<<n;return;}
    
    int c=0, maxi=a[0];
    for(int i=1;i<n;i++)
    {
        if(maxi > a[i])c++;
        else {maxi=a[i];c=1;}
        if(c>=k) {cout<<maxi;return;}
    }
    cout<<n;
    return;


}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}