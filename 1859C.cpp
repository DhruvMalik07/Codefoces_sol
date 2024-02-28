// wrong
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
    ll sum=0;
    double x=ceil(sqrt(n));
    //if(1.0*sqrt(n)==sqrt(n)) x++;
    for(int i=1;i<=n-x;i++) sum+=1ll*i*i;
    //cout<<sum<<" ";

    ll maxi=0,j=0;
    for(int i=n-x+1;i<=n;i++)
    {
        maxi=max(maxi,1ll*(n-j)*i); 
        sum+=1ll*(n-j)*i;
        j++;
    }
    cout<<sum-maxi<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}