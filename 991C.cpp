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
    ll n;cin>>n;
    ll l=1,h=n;
    ll ans=0;
    while(l<=h)
    {
        ll mid=l+(h-l)/2;
        ll temp=n;
        ll x=0,y=0;
        while(temp>0)
        {
            if(temp>=mid) {x+=mid;temp-=mid;}
            else {x+=temp;temp=0;}
            ll z=temp/10;
            y+=z;
            temp-=z;
        }
        if(x>=(n+1)/2) {ans=mid;h=mid-1;}
        else l=mid+1;
    }
    cout<<ans<<endl;

    return;
}

int main()
{
    solve(); 
    return 0;
}