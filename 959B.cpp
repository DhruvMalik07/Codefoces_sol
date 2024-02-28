// DSU not required
// It's guaranteed that each word appears in exactly one group.

#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{   
    int t=1;
    while(t--)
    {
        int n,k,m; cin>>n>>k>>m;
        string s[n];
        int a[n];
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=0;i<n;i++) cin>>a[i];
        while(k--)
        {
            int x;cin>>x;
            int temp[x];
            int mini=INT_MAX;
            for(int i=0;i<x;i++) { cin>>temp[i];  if(a[temp[i]-1]<mini) mini=a[temp[i]-1];}
            for(int i=0;i<x;i++) a[temp[i]-1]=mini;
        }

        unordered_map<string,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]=a[i];
        
        ll ans=0;
        for(int i=0;i<m;i++) { string str; cin>>str; ans+=mp[str];}
        
        cout<<ans<<endl;
    }
    return 0;
}