#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve()
{
    ll n,m;cin>>n>>m;
    ll q;cin>>q;
    ll g=__gcd(n,m);

    while(q--)
    {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        ll x=n/g, y=m/g;
        if(g==1) cy;
        else
        {
            if(a==1 && c==1)
            {
                if((b-1)/x==(d-1)/x) cy;
                else cn;
            }
            else if(a==1 && c==2)
            {
                if((b-1)/x==(d-1)/y) cy;
                else cn;
            }
            else if(a==2 && c==1)
            {
                if((b-1)/y==(d-1)/x) cy;
                else cn;
            }
            else
            {
                if((b-1)/y==(d-1)/y) cy;
                else cn;
            }
        }
    }
    return ;
}

int main()
{
    solve();
    
    return 0;
}