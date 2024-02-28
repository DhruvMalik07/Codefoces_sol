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
    for(int i=0;i<n;i++)  cin>>a[i];
    sort(a.begin(),a.end());

    ll prev=a[0], c=1;
    for(int i=1;i<n;i++) 
    if(a[i]>=prev) {c++;prev+=a[i];}
    
    cout<<c<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}