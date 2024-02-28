#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(int i=0;i<n;i++)
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
    int m,k,a,ak;cin>>m>>k>>a>>ak;
    int req1=m%k;
    int reqk=m/k;

    // taken -> fancy
    int taken1=max(0,req1-a);
    int takenk=max(0,reqk-ak);
    int left1=max(0,a-req1);
    int to_replace= min(left1/k, takenk);

    cout<<taken1 + takenk - to_replace<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}