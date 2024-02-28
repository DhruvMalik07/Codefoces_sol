// Not working 
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
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n==1) {cout<<"NO\n";continue;}
        ll x=sqrt(n);
        double y=sqrt(n);
        if(x!=y) cout<<"NO\n";
        else
        {
            bool flag=false;
            if(x%2==0||x%3==0||x%5==0||x%7==0||x%11==0||x%13==0||x%17==0||x%19==0) flag=true;
            for(ll i=20;i<=(x+1)/20;i++)
            {
                if(x%i==0) flag=true;
            }
            (flag)?cout<<"NO\n":cout<<"YES\n";
        }
    }
    return 0;
}