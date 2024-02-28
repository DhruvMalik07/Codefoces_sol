#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
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
    ll n;cin>>n;
    string s; cin>>s;
    vi a(n,0);

    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=(int)s[i]-'0';
        a[i]=temp;
    }
    //for(auto i:a) cout<<i<<" ";
    for(int i=n-1;i>0;i--)
    {
        int rem=a[i]/10;
        a[i]=a[i]%10;
        a[i-1]+=rem;
    }
    bool flag=true;
    for(int i=0;i<n;i++)  
    {
        if(a[i]==0 & flag) continue;
        flag =false;
        cout<<a[i];
    }
    cout<<endl;
    return;

    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}