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
    int a[n][2];
    for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
    int c=1;
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1][0]<a[i][0]-a[i][1]) c++;
        else if(a[i+1][0]>a[i][0]+a[i][1]) c++, a[i][0]=a[i][0]+a[i][1];
    }
    if(n>1) c++;
    cout<<c<<endl;
    return;
}

int main()
{
    solve();
    
    return 0;
}