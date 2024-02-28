#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vi vector<ll>

void solve()
{
    int n;cin>>n;
    vi a(n+1,0);
    f(n)
    {
        int x; cin>>x;
        if(x<=n) a[x]++;
    } 

    vi ct(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=0)
        {
            for(int j=i;j<=n;j+=i) ct[j]+=a[i]; 
        }
    }
    ll maxi=0;
    for(auto i:ct) maxi=max(maxi,i);
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