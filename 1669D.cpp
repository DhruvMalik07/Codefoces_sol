#include<bits/stdc++.h>
using namespace std;
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    bool r=false, b=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R') r=true;
        else if(s[i]=='B') b=true;
        else if(s[i]=='W')
        {
            if((b && r)||(!b && !r)) r=false,b=false;
            else {cn;return;}
        }
    }
    if((b && r)||(!b && !r)) cy;
    else cn;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}