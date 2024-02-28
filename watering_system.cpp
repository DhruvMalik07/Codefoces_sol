// done
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
    double n,x,y; cin>>n>>x>>y;
    vi a(n,0);
    ll total=0;
    for(int i=0;i<n;i++) {cin>>a[i];total+=a[i];}
    sort(a.begin()+1,a.end());
    int ct=0,j=n-1;
    //if(x==y) {cout<<n-1; return;}

    while(j>0)
    {
        if(1.0*a[0]*x/total>=y) {cout<<ct;return;}
        else
        {
            total-=a[j]; //cout<<total<<" ";
            j--;
        }
        ct++;
    }

    if(1.0*a[0]*x/total>=y) cout<<ct;
    else cout<<"0";
    return;

}

int main()
{
    solve();
    
    return 0;
}