#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve()
{
    int n,m;cin>>n>>m;
    vi a(n,0);
    vi b(m,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());

    for(auto i:b)
    cout<<upper_bound(a.begin(),a.end(),i)-a.begin()<<" ";

}

int main()
{
    solve();
    
    return 0;
}