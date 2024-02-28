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
#define N 1000007
vi hp(N,1);
map<int,int> mp;

void calc()
{
for(int i=2;i<N;i++)
    {
        if(hp[i]==1){           
        for(int j=i;j<N;j+=i)
        hp[j]=i;}
    }
}

void Primefact(int n)
{
    while(n>1)
    {
        int temp=hp[n];
        while(n%temp==0) { mp[temp]++; n/=temp; }
    }
    return;
}

void solve()
{
    mp.clear();
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(auto i:a) Primefact(i);

    bool flag=true;
    for(auto [i,j]:mp) {  /*cout<<i<<" "<<j<<endl;*/ if(j%n!=0) flag=false; }

    if(flag) cy;
    else cn;
    return;
}

int main()
{
    calc();   
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}