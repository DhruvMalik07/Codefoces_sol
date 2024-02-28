#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        while(1)
        {
            ll x=pow(2,n-1);
            if(x==k) {cout<<n;break;}
            else if(k>x) k=k-x;
            n--;
        }
    }
    return 0;
}