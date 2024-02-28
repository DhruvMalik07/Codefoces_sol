// Working
/*
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
    int n,m;cin>>m>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    map<int,int>mp;
    for(auto i:a) mp[i]++;

    int ans=1;
    while(true) 
    {
        int sum=0;
        for(auto [i,j]:mp) 
        sum+=j/ans;
        
        if(sum<m) break;
        ans++;
    }
    cout<<--ans<<endl;
}

int main()
{
    solve();
    
    return 0;
}
*/

// Optimised

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
    int n,m;cin>>m>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    if(m>n) {cout<<0;return;}
    map<int,int>mp;
    for(auto i:a) mp[i]++;

    int l=1,h=n;
    int ans=0;
    while(l<=h) 
    {
        int mid=l+(h-l)/2;
        int sum=0;
        for(auto [i,j]:mp) 
        sum+=j/mid;
        
        if(sum>=m)  {ans=mid;l=mid+1;}
        else h=mid-1;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    
    return 0;
}