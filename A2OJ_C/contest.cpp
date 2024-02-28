#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<long long int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    vi b(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int j=0;
    while(j++<n)
    {
        int maxi=INT_MIN, maxi2=INT_MIN;
        int index=-1;
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]>maxi && b[i]>0) maxi=a[i],index=i,maxi2=b[i]; 
                else if(a[i]==maxi && maxi2<b[i]) index=i,maxi2=b[i];
            }
            
            if(index==-1) break;
            b[index]--;a[index]=0; 
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(b[i]>maxi && a[i]>0) maxi=b[i],index=i,maxi2=a[i];
                else if(b[i]==maxi && maxi2<a[i]) index=i,maxi2=a[i];
            }
 
            if(index==-1) break;
            a[index]--;b[index]=0;
        }
    }
    ll c=0;
    for(int i=0;i<n;i++) c+=a[i];
    for(int i=0;i<n;i++) c-=b[i];
    cout<<c<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}