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
    vi arr(n,0);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {cin>>arr[i]; mp[arr[i]]=i;}

    int x,k;cin>>k;
    ll a=0,b=0;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        a+=mp[x]+1;
        b+=n-mp[x];
    }
    cout<<a<<" "<<b<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}