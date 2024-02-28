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
        ll n,s;cin>>n>>s;
        ll a[n];
        ll sum=0;
        ll mini=INT_MAX;
        for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i]; if(mini>a[i]) mini=a[i];}
        if(sum < s) {cout<<-1<<endl; continue;}
        
        for(int i=0;i<n;i++)
        s-=a[i]-mini;

        if(s<=0) {cout<<mini<<endl; continue;}

        cout<< mini-1-(s-1)/n;
    }
         
    return 0;
}