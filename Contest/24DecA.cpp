//Done
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
    int n;cin>>n;
    vi a(n,0);
    int p=0,neg=0,index=1;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++) 
    {
        if(a[i]>0) {p++;index=i+1;}
        else if (a[i]<0)neg++;
    }
    if(neg%2==1 || n!=p+neg) cout<<0<<endl;
    else cout<<"1\n"<<index<<" 0\n";
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}