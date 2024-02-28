#include<bits/stdc++.h>
using namespace std;
#define N 1000005
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t;cin>>t;
    bool a[N];
    fill_n(a,N,true);
    for(int i=2;i<N;i++)
    {
        if(a[i])
        {
            for(int j=2*i;j<N;j+=i) a[j]=false;
        }
    }

    while(t--)
    {
        ll n;cin>>n;
        if(n==1) {cout<<"NO\n";continue;}
        ll x=sqrt(n);
        double y=sqrt(n);
        if(x!=y) cout<<"NO\n";
        else
        {
            (!a[x])?cout<<"NO\n":cout<<"YES\n";
        }
    }
    return 0;
}