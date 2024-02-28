// Use long Division 
// period can't be more than b by pigeonhole priciple
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define minus cout<<"-1\n"

void solve()
{
    int a,b,c;cin>>a>>b>>c;
    //a*=10;
    int j=1;
    while(j<=b)
    {
        a*=10;
        if(a/b==c) {cout<<j;return;}
        a=a%b;
        j++;
    }
    minus;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}

