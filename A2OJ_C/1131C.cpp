// Accepted
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vll vector<long long int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    //using  a as vector instead of array passed test case 8
    ll n;cin>>n;
    vll a(n);
    vll vec(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==2) {cout<<a[0]<<" "<<a[1]; return;}
    sort(a.begin(),a.end());
    
    ll k=0,j=0;
    for(ll i=0;i<n;i+=2) vec[k++]=a[i];
    
    if((n&1)==0) j=n-1;
    else j=n-2; 
    
    for(;j>=0;j-=2) vec[k++]=a[j];

    for(auto i:vec) cout<<i<<" ";
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}

// Wrong on Test Case 8
