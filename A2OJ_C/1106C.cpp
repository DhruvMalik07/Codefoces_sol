#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<long long int>
int main()
{
    int t=1;
    while(t--)
    {
        int n;cin>>n;
        vll vec(n,0);
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(),vec.end());
        ll ans=0;
        for(int i=0;i<n/2;i++) 
        ans+=pow(vec[i]+vec[n-1-i],2);
        
        cout<<ans<<endl;
    }
    return 0;
}