// correct 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())>
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
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    ll sum=0;
    priority_queue<int> pq;
    for(auto i:a)
    {
        if(i!=0) pq.push(i);
        else if(pq.size()!=0) {sum+=pq.top(); pq.pop();}
    }
    cout<<sum<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}