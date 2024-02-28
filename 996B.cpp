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
    int n;cin>>n;
    int a[n];
    int mini=INT_MAX;
    for(int i=0;i<n;i++) {cin>>a[i]; mini=min(mini,a[i]);}

    for(int i=0;i<n;i++) a[i]-=mini;

    int k=mini%n;
    //if(k>0 && mini!=0) cout<<n;
    //else k--;

    int count=0;
    for(int i=k;i<n+k;i++)
    {
        if(i>=n) i=i%n;
        if(a[i]-count<=0) {cout<<i+1;break;}
        count++;
    }
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}