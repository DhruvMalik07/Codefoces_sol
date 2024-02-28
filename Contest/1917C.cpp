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
    int n,k,d;cin>>n>>k>>d;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    vi b(k,0);
    for(int i=0;i<k;i++) cin>>b[i];

    int maxi=-1,c=0;
    for(int i=0;i<d && i<2*n;i++)
    {
        c=0;
        for(int j=0;j<n;j++) c+=(a[j]==j+1);
        c+=(d-(i+1))/2;
        maxi=max(maxi,c);
        for(int j=0;j<b[i%k];j++) a[j]++;
    }
    cout<<maxi<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}