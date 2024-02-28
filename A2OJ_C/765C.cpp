#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    int k,a,b;cin>>k>>a>>b;
    int maxi= max(a,b);
    int mini= min(a,b);
     
    if(maxi<k) cout<<-1;
    else if(maxi>=k && mini<k) 
    {
        if(maxi%k==0) cout<<maxi/k;
        else cout<<-1;
    }
    else 
    cout<<a/k + b/k<<endl;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}