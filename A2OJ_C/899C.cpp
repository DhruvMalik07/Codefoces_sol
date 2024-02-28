// Accepted
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    int n;cin>>n;
    if(n==1 || n==2) {cout<<1<<endl<<"1 1";return;}
    if(n==6) {cout<<1<<endl<<"4 1 2 3 4";return;}

    if(n%4==0)
    {
        cout<<0<<endl;
        cout<<n/2<<" ";
        for(int i=1;i<=n/2;i+=2)   cout<<i<<" ";
        for(int i=n/2+2;i<=n;i+=2) cout<<i<<" ";
    }
    else if(n%4==1)
    {
        ll t=n/4;
        cout<<1<<endl;
        cout<<n-2*t-1<<" ";
        for(int i=t+2;i<=n-t;i++) cout<<i<<" ";
    }
    else if(n%4==2)
    {
        // carefull
        cout<<1<<endl;
        ll t=(n+2)/4;
        ll i=max(1ll,t-2);
        cout<<n-(i+t)<<" ";
        i++;
        for(;i<=n-t;i++) cout<<i<<" ";
    }
    else
    {
        cout<<0<<endl;
        ll t=(n+1)/4;
        cout<<2*t-1<<" ";
        for(int i=1;i<t;i++)  cout<<i<<" ";
        for(int i=n;i>n-t;i--) cout<<i<<" ";
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