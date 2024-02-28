#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,bool> flag;
    map<int,int> mp;
    for(auto i:a)
    {
        flag[i]=true;
        mp[i]++;
    }

    ll ans=0;
    for(int i=0;i<n;i++) 
    {
        if(flag[a[i]]) 
        {
            //cout<<ans<<" ";
            flag[a[i]]=false;
            if(mp[a[i]]>1) ans+=mp.size();
            else ans+=mp.size()-1;
        }
        mp[a[i]]--;
        if(mp[a[i]]==0) mp.erase(a[i]);
    }
    cout<<ans<<endl; 
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}