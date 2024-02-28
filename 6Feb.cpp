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
void solve()
{
    int n;cin>>n;
    vi a(n,0), right(n,0), left(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    right[0]=-1, left[n-1]=-1;
    for(int i=1;i<n;i++) 
    {
        if(a[i-1]!=a[i]) right[i]=i-1;
        else right[i]=right[i-1];
    }

    /*for(auto i:right) cout<<i<<" ";
    cout<<endl;*/

    for(int i=n-2;i>=0;i--) 
    {
        if(a[i+1]!=a[i])left[i]=i+1;
        else left[i]=left[i+1];
    }
    //set<pair<int,int>> st;

    int q;cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        l--;r--;
        if(left[l]<=r && left[l]!=-1) cout<<l+1<<" "<<left[l]+1<<endl;
        else cout<<"-1 -1\n";
    }
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}