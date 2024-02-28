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
    ll k,p;cin>>k>>p;
    ll sum=0;
    for(ll i=1;i<=k;i++)
    {
        ll temp=i;
        ll x= i;
        while(temp>0) {x=x*10+temp%10; temp/=10;}
        sum=(sum+x)%p;
        //cout<<x<<" ";
    }
    cout<<sum<<endl;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}