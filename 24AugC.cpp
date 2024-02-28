// Accepted
#include<bits/stdc++.h>
using namespace std;
#define M 998244353
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vll vector<long long int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    string s; cin>>s;
    ll n=s.size();
    vll vec;
    ll c=0;
    char temp=s[0];
    for(int i=0;i<=n;i++)
    {
        if(temp==s[i]) c++;
        else 
        {
            vec.pb(c);
            c=1;
            if(temp=='0') temp='1';
            else temp='0';
        }
    }
    ll x=0,y=1;
    for(auto i:vec)
    {
        x+=(i-1);
        y=(y*i)%M;
    }

    ll fact=1;
    for(int i=1;i<=x;i++) fact=(fact*i)%M;
    y=(y*fact)%M;
    cout<<x<<" "<<y<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}