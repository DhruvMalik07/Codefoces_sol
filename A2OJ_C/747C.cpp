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
    int n,q;cin>>n>>q;
    int a[n];
    fill_n(a,n,1);
    while(q--)
    {
        int t,d,k;cin>>t>>d>>k;
        int c=0;
        for(int i=0;i<n;i++) {if(a[i]<=t) c++;}
        if(c<d) minus;
        else
        {
            int sum=0,c=0;
            for(int i=0;i<n&&c<d;i++)
            {
                if(a[i]<=t) {a[i]=t+k;sum+=i+1;c++;}
            }
            cout<<sum<<endl;
        }
    }
    return ;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}