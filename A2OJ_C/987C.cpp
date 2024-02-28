// worng ans
// modification required 
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

int sol(vi& s, vi& cost)
{
    int n=s.size();
    int l[n],r[n],lc[n],rc[n];
    l[0]=s[0]; lc[0]=cost[0];
    r[n-1]=s[n-1]; rc[n-1]=cost[n-1];
    for(int i=1;i<n;i++)
    {
        l[i]=l[i-1]; lc[i]=lc[i-1];
        if(s[i]>l[i-1]) {l[i]=s[i]; lc[i]=cost[i];}
        else if(s[i]==l[i-1]) {lc[i]=min(cost[i],lc[i]);}
    }
    for(int i=n-2;i>=0;i--)
    {
        r[i]=r[i+1]; rc[i]=rc[i+1];
        if(s[i]>r[i+1]) {r[i]=s[i]; rc[i]=cost[i];}
        else if(s[i]==r[i+1]) {rc[i]=min(cost[i],rc[i]);}
    }
    
    int ans=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]>l[i-1] && s[i]<r[i+1]) ans=min(ans,lc[i-1]+cost[i]+rc[i+1]); 
    }
    
    return ans;
}

void solve()
{
    int n;cin>>n;
    vi s(n,0);
    vi cost(n,0);
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>cost[i];
  
    int ans=sol(s,cost);
    reverse(s.begin(),s.end());
    reverse(cost.begin(),cost.end());
    //ans=min(ans,sol(s,cost));
    if(ans==INT_MAX) ans=-1;
    
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
*/

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

int sol(vi& s, vi& cost)
{
    int n=s.size();
    int lc[n],rc[n];
    for(int i=1;i<n-1;i++)
    {
        lc[i]=INT_MAX;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]>s[i]) lc[i]=min(lc[i],cost[j]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        rc[i]=INT_MAX;
        for(int j=i-1;j>=0;j--)
        {
            if(s[j]<s[i]) rc[i]=min(rc[i],cost[j]);
        }  
    }
    
    int ans=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        if(lc[i]!=INT_MAX && rc[i]!=INT_MAX) 
        ans=min(ans,lc[i]+cost[i]+rc[i]); 
    }
    
    return ans;
}

void solve()
{
    int n;cin>>n;
    vi s(n,0);
    vi cost(n,0);
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>cost[i];
  
    int ans=sol(s,cost);
    reverse(s.begin(),s.end());
    reverse(cost.begin(),cost.end());

    if(ans==INT_MAX) ans=-1;
    
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