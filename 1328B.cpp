// WRONG
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<b;i++)

void solve()
{
    ll n,m;cin>>n>>m;
    ll l=sqrt(m), h=n;
    string ans="";
    f(i,0,n) ans+='a';
    ll x=0,y=0;
    ll mid=1;
    // mid-> I was trying to apply Binary Search
    while(mid<=n)
    {
        if(mid*(mid+1)/2 ==m ) {x=mid-1;y=mid;break;}
        else if(mid*(mid+1)/2 <m && (mid+1)*(mid+2)/2 >m) {x=mid; y=m-mid*(mid+1)/2;  break;}
        mid++;
    }
    //cout<<x<<" "<<y<<endl;
    ans[n-x-2]='b';
    ans[n-y]='b';
    cout<<ans<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}