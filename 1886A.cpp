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
    int n;cin>>n;
    if(n>=10||n==7||n==8)
    {
        if(n%3!=0) 
        {
            cy;
            cout<<n-3<<" 1 2 \n";
        }
        else
        {
            cy;
            cout<<n-5<<" 1 4 \n";
        }
    }
    else cn;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}