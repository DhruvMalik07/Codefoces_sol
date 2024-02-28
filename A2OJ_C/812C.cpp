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
    ll n,S;cin>>n>>S;
    vector<long long int> a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    ll l=1,h=n,ans=0;
    ll total=0;
    while(l<=h)
    {
        ll mid=l+(h-l)/2;
        vector<long long int> temp=a;
        for(int i=0;i<n;i++)
        temp[i]+=(i+1)*mid;
        
        sort(temp.begin(),temp.end());
        long long int sum=0;
        for(int i=0;i<mid;i++) sum+=temp[i];
        if(sum<=S){ans=mid,total=sum;l=mid+1;}
        else h=mid-1;
    }
    cout<<ans<<" "<<total<<endl;

}

int main()
{
    solve();   
    return 0;
}