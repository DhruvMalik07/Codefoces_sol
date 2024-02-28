#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(n) for(int i=0;i<n;i++)
#define vi vector<ll>
#define pb push_back

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vi a(n,0),b(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        //fan;fab;
        vector<pair<ll,pair<ll,ll>>> vectr(n);
        f(n)
        {
            vectr[i].first = a[i]+b[i];
            vectr[i].second.first = a[i];
            vectr[i].second.second = b[i];
        }

        sort(vectr.begin(),vectr.end());
        for(int i=0;i<n;i++) cout << vectr[i].second.first << " ";
        cout << endl;
        
        for(int i=0;i<n;i++) cout << vectr[i].second.second << " ";
    }
    return 0;
}