#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

void solve()
{
    int n;cin>>n;
    for(int i=0;i<11;i++) if(n>=i*111 && (n-i*111)%11==0) {cy;return;}
    cn;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}