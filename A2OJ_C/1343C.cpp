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
    for(int i=0;i<n;i++) cin>>a[i];

    int maxi=INT_MIN;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        maxi=INT_MIN;
        
            int cur = a[i];
			int j = i;
			while (j < n && 1ll*a[i]*a[j] >0) 
         	cur = max(cur, a[j++]);	
			
			sum += cur;
			i = j - 1;
        
    }
    cout<<sum<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}