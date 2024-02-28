//TLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n,k;cin>>n>>k;
    vi a(n,0);
    int pos=-1,c=0,l=1;
    f(n) cin>>a[i];
    s(a);
    for(int i=1;i<n;i++) a[i]+=a[i-1]; 
    for(int i=0;i<n;i++) {if(a[i]>k) break; else pos++;}
    if(pos>=0) c=pos+1;
    while(pos>=0)
    {
        while(pos>=0)
        {
            if(a[pos]+l*(pos+1)<=k) {c+=pos+1;break;}
            else pos--;
        }
        l++;
    }
    cout<<c<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}