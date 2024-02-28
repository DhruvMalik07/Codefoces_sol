#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
ll solve()
{
    int n,m,k; cin>>n>>m>>k;
    vi a(n,0), b(m,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    ll sum=0;
    /*
    for(auto i:a) sum+=i;
    cout<<sum<<" "<<a[0]<<" "<<b[0]<<" "<<a[n-1]<<" "<<b[m-1]<<" ";

    if(k%2==0)
    {
        if(a[0]<b[0] && a[n-1]<=b[m-1]) return sum;
        else if(a[0]>=b[0] && a[n-1]<=b[m-1]) return sum-a[0]+b[0];
        else return sum-a[n-1]+b[0]; 
    }
    else
    {
        if(a[0]<b[0] && a[n-1]<=b[m-1]) return sum+b[m-1]-a[0];
        else if(a[0]>=b[0] && a[n-1]<=b[m-1]) return sum+b[m-1]-a[0];
        else return sum; 
    }
    */
    int x=0,y=0; k--;
    for(int i=1;i<n;i++) if(a[i]<a[x]) x=i;
    for(int i=1;i<m;i++) if(b[i]>b[y]) y=i;
    if(b[y]>a[x]) swap(a[x],b[y]); 

    if(k&1)
    {
        x=0,y=0;
        for(int i=1;i<n;i++) if(a[i]>a[x]) x=i;
        for(int i=1;i<m;i++) if(b[i]<b[y]) y=i;
        if(b[y]<a[x]) swap(a[x],b[y]);
    }

    for(auto i:a) sum+=i;
    cout<<sum<<endl;

    return 0;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}