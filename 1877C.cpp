#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
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
    ll n,m,k;cin>>n>>m>>k;
    if(k==1)                    cout<<1;
    else if(k>3||(m<=n&&k==3))  cout<<0; 
    else if(k==2 && m>=n)       cout<<n+(m-n)/n;
    else if(k==2)               cout<<m;
    else                        cout<<m-n-(m-n)/n;
    cout<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}