// Accepted
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
        int n,m;cin>>n>>m;
        ll a[n],b[m];
        ll a_xor=0 ,b_or=0,z=0;
        for(int i=0;i<n;i++) { cin>>a[i]; a_xor=a_xor^a[i]; }
        for(int i=0;i<m;i++) { cin>>b[i]; b_or=b_or|b[i]; }
        for(int i=0;i<n;i++) { a[i]|=b_or;}
        for(int i=0;i<n;i++) { z^=a[i];}

        cout<<min(a_xor,z)<<" "<<max(a_xor,z)<<endl;

    }
    return 0;
}