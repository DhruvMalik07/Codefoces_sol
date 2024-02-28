#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int ans=n;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0) {ans=i;break;}
    
    cout<<n/ans<<" "<<1ll*(ans-1)*n/ans<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}