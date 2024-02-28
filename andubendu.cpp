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
    auto it=lower_bound(a.begin(),a.end(),8)-a.begin();
    cout<<it<<endl;
    cout<<upper_bound(a.begin(),a.end(),8)-a.begin();

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}