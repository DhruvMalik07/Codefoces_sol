/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int l,a,b; cin>>a>>b>>l;
    int ct=0;
    vi x,y;
    int temp=1;
    for(int i=1;i<=22;i++)
    {
        if(temp>1000007) break;
        else x.pb(temp);
        temp*=a;
    }

    temp=1;
    for(int i=1;i<=22;i++)
    {
        if(temp>1000007) break;
        else y.pb(temp);
        temp*=b;
    }
    if(a!=b){
    for(auto i:x)
    {
        for(auto j:y)
        {
            if(l%(1ll*i*j)==0) ct++;
        }
    }}
    else 
    {
        for(auto i:x) 
        {
            if(l%(1ll*i)==0) ct++;
        }
    }
    cout<<ct<<endl;
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

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        double a,b,l;
        cin>>a>>b>>l;
        set<double> s;
        for(int i=0; i<=31; i++)
        {
            for(int j=0; j<=31; j++)
            {
                float temp=l/(pow(a,i)*pow(b,j));
                if(abs(temp-int(temp))==0&&temp>0)
                s.insert(temp);
            }
        }
        cout<<s.size()<<endl;
    }
}