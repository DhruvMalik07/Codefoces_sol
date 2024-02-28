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
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        if(n>3)
        {
            int maxi=-1;
            for(int i=0;i<n;i++) 
            if(a[i]>maxi) maxi=a[i];
            ll ans=maxi*n;
            cout<<ans<<endl;
        }
        else if(n==2)
        {
            cout<<max(2*abs(a[0]-a[1]), a[0]+a[1])<<endl;
        }
        else
        {
            ll maxi =max(a[0],a[2]);
            maxi=max(3*maxi,max(a[0]+a[1]+a[2], max(3*abs(a[0]-a[1]), max(3*abs(a[0]-a[2]),3*abs(a[2]-a[1])))));
            cout<<maxi<<endl;
        }
    }
    return 0;
}