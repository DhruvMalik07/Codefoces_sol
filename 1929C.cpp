#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int k,x,a; cin>>k>>x>>a;
    if(a<=x) {cout<<"NO\n";return;}
    
    int temp=1;
    
    int lim=1;
    a-=1;

    for(int i=1;i<=x;i++)
    {
        int req=ceil(1.0*(lim+1)/(k-1));
        temp =req;
        a-=req;
        if(a<0) {cout<<"NO\n"; return;}
        lim+=req;
    }

    cout<<"YES\n";
    return;

}

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    
    return 0;
}