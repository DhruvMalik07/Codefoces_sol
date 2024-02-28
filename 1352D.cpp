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
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    int c=1,f=a[0],b=0, l=0, r=n;
    int alice=f,bob=0;
    bool flag=false;
    while(l<r-1)
    {
        b=0;
        flag=false;
        while(b<=f && r>l+1) {b+=a[--r];flag=true;}
        bob+=b;
        if(flag)c++;
        f=0;
        flag=false;
        while(f<=b && r>l+1) {f+=a[++l]; flag=true;}
        alice+=f;
        if(flag)c++;
    }
    cout<<c<<" "<<alice<<" "<<bob<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}