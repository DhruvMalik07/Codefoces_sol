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
    int n,k;cin>>n>>k;
    vector<int> a(n), b(n); 
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    vector<pair<int,pair<int,int>>> vec; 
    for(int i=0;i<n;i++) 
    vec.pb({a[i]-b[i],{a[i],b[i]}}); 

    sort(vec.begin(),vec.end());
    ll sum=0,count=0; 

    for(int i=0;i<n;i++)
    {
        //cout<<vec[i].first<<" "<<vec[i].second.first<<endl;
        if(vec[i].first <= 0) {  // Correct syntax
            count++;
            sum+=vec[i].second.first;
        }
        
        else if(count < k) 
        {    
            count++;
            sum+=vec[i].second.first;
        }

        else if(count >= k) 
        sum+=vec[i].second.second;
        
    }
     cout<<sum<<endl;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
