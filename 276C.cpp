#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>

void solve()
{
    int n,k;cin>>n>>k;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());

    vi val(n,0);
    ll l,r,sum=0;
    while(k--)
    {
        cin>>l>>r;
        l--,r--;
        val[l]++;
        if(r<n-1) val[r+1]--;
    }
    for(int i=1;i<n;i++) val[i]+=val[i-1];
    sort(val.begin(),val.end());

    for(int i=0;i<n;i++) sum+=1ll*val[i]*a[i];
    cout<<sum<<endl;
    return; 
}

int main()
{
    solve();
    
    return 0;
}