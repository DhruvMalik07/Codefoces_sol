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
#define N 1000007
set<ll> st;
void solve()
{
    for(ll i=2;i<N-1;i++)
    {
        ll temp=1 +i;
        ll k=i;
        while(temp<N)
        {
            k=k*i;
            temp+=1ll*k;
            st.insert(temp);   
        }
    }
    return;

/*    
    int n;cin>>n;
    if(n<5) {cn; return;}
    for(ll i=2;i<n;i++) 
    {
        double req=(1.0*(n-1)*(i-1)/i) +1;
        ll temp=i*i;
        while(req>temp)
        temp*=i;
        
        if(req==temp) {cy;return;}
    }
    cn;
    return;  
*/ 
}

int main()
{
    solve();
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(st.find(n)!=st.end()) cy;
        else cn;
    }
    
    return 0;
}
