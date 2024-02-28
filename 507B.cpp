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
    int n,a,b,c,d;cin>>n>>a>>b>>c>>d;
    double dis=sqrt(pow(a-c,2)+pow(b-d,2));
    int ans=ceil(dis/(2*n));
    cout<<ans<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}