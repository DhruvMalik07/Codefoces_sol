#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    int a;
    
    int n;cin>>n;
    ll num;cin>>num;
    vector<int> vec;
    while(num>0)
    {
        int rem=num%10;
        if(rem==1 || rem==0);
        else if(rem==4) vec.pb(3),vec.pb(2),vec.pb(2);
        else if(rem==6) vec.pb(5),vec.pb(3);
        else if(rem==8) vec.pb(7),vec.pb(2),vec.pb(2),vec.pb(2);
        else if(rem==9) vec.pb(7),vec.pb(2),vec.pb(3),vec.pb(3);
        else vec.pb(rem);
        num=num/10;
    }
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto i:vec) cout<<i;
    return;
}

int main()
{
    solve();
    
    return 0;
}