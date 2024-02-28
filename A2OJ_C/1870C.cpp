// TLE on Test 22
// O(n^2)
/*
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
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
 
        int ans[k+1];
        fill_n(ans,k+1,0);
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            int l=0,r=n+1;
            for(int j=0;j<n;j++)    {if(a[j]>=x) {l=j; break;}}
            for(int j=n-1;j>=0;j--) {if(a[j]>=x) {r=j; break;}}
            ans[x]=2*(r-l+1);
        }

        for(int i=1;i<=k;i++) cout<<ans[i]<<" ";
        cout<<endl; 
    }
    return 0;
}
*/

// Accepted
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
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
 
        int ans[k+1];
        fill_n(ans,k+1,0);

        int l[k+1], r[k+1];
        fill_n(l,k+1,-1);
        fill_n(r,k+1,-1);

        for(int i=0;i<n;i++)    if(l[a[i]]==-1) l[a[i]]=i;
        
        for(int i=n-1;i>=0;i--) if(r[a[i]]==-1) r[a[i]]=i;

        set<int> s,q;

        for(int i=1;i<=k;i++)
        {
            if(l[i]!=-1) s.insert(l[i]);
            if(r[i]!=-1) q.insert(r[i]);
        }
        
        for(int i=1;i<=k;i++) 
        {
            if(l[i]==-1 || r[i]==-1) continue;
            ans[i]=2*(*(q.rbegin())-*(s.begin())+1);
            s.erase(l[i]);
            q.erase(r[i]);
        }
        for(int i=1;i<=k;i++) cout<<ans[i]<<" "; 
        cout<<endl; 
    }
    return 0;
}