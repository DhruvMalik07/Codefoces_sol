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
    int n,l;cin>>n>>l;
    vi a(n,0);
    vi b(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    vi diff (n,0);
    for(int i=1;i<n;i++) diff[i]=a[i]-a[i-1];
    diff[0]=(l-a[n-1]+a[0]);

    vi diff2 (n,0);
    for(int i=1;i<n;i++) diff2[i]=(b[i]-b[i-1]);
    diff2[0]=(l-b[n-1]+b[0]);

    //for(auto i:diff) cout<<i<<" ";
    //cout<<endl;
    //for(auto i:diff2) cout<<i<<" ";

    int temp=n;
    int k=0;
    while(temp--)
    {
        
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(diff[i]!=diff2[(i+k)%n]) {flag=false;break;}
        }
        k++;
        if(flag) {cy;return;}
    }
    cn;
    return ;


}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}