#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(n) for(int i=0;i<n;i++)
#define vi vector<ll>

void solve()
{
    int n;cin>>n;
    int ct=0;
    vi vec(n,0);
    f(n) cin>>vec[i];
    sort(vec.begin(),vec.end());

    map<int,int> mp;
    for(auto i:vec) mp[i]++;
    
    for(auto i:vec) 
    {
        if(mp[i]<=0) continue;
        int req=(((1<<31)-1)^i);
        if(mp.find(req)!=mp.end())
        mp[req]--;

        mp[i]--;
        ct++;
    }
    cout<<ct<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}