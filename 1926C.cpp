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
#define n 200007
vi vec(n,0);

void solve()
{
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       int temp=i;
       while(temp>0) {ans+=temp%10; temp/=10;}
       vec[i]=ans;
   }
   return;
}

int main()
{
    solve();
    int t;cin>>t;
    while(t--)
    {
        int a; cin>>a;
        cout<<vec[a]<<endl;
    }
    
    return 0;
}