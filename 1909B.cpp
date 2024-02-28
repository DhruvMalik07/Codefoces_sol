// TLE
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
#define M  1000000

vb flag(100,false);
vi prime;

void solve()
{
    for(int i=2;i<=100;i++)
    {
        if(flag[i]==false) prime.pb(i);
        for(ll j=1ll*i*i;j<=100;j+=i)
        flag[j]==true;
    }

    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    int j=0,count=1;
    while(j<prime.size())
    {
        ll temp=prime[j];
        while(temp<=M)
        {
            temp=pow(prime[j],count);
            set<int> vec;
            for(auto i:a)
            {
                vec.insert(i%prime[j]); 
                if(vec.size()>2) break;
            }
            
            if(vec.size()==2) {cout<<temp<<endl; return;}
            count++;
        }
        j++;
    }
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}

*/

// Greedy  TLE
/*

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
#define N 1e18
void solve()
{
    ll n;cin>>n;
    vi a(n,0);
    for(ll i=0;i<n;i++) cin>>a[i];

    int j=1;
    while(j<N)
    {
        set<int> vec;
        for(auto i:a)
        {
            vec.insert(i%j); 
            if(vec.size()>2) break; 
        }
        
        if(vec.size()==2) {cout<<j<<endl; return;} 
        j++;
    }
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}*/

//Accepted
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
    ll n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    int j=1;
    for(int j=1;j<60;j++)
    {
        ll temp=pow(2,j);
        set<ll> vec;
        for(auto i:a)
        {
            vec.insert(i%temp); 
            if(vec.size()>2) break; 
        }
        
        if(vec.size()==2) {cout<<temp<<endl; return;} 
    }
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}