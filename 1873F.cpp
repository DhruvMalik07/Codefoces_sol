// Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n,k;cin>>n>>k;
    vi a(n,0),  h(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>h[i];

    ll sum=a[0], j=0, len=0;
    if(sum<=k) len++;

    for(int i=1;i<n;i++)
    {
        sum+=a[i];
        if(h[i-1]%h[i]) {sum=a[i]; j=i;}
        else if(sum>k)
        {
            //while(i<n && a[i]>k) i++;
            //if(i==n) break;
            while(sum>k) sum-=a[j++];
            //sum=a[i]; j=i;
        }

        if(sum<=k) len=max(len,i-j+1);
    }
    cout<<len<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}