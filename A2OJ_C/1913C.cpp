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

vi a(30,0);

void solve()
{
    int n,m;cin>>n>>m;
    if(n==1) {a[m]++;return;}
    int j=29;
    while(m>=0 && j>=0)
    {
        if(m>=pow(2,j))
        {
            if(m>=a[j]*pow(2,j)) m=m-a[j]*pow(2,j);
            else m=m%(1<<j);
        }

        if(m==0){cy;return;}
        j--;
    }
    cn; return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}