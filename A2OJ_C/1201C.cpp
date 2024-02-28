// Naive approach
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void solve()
{
    int n,k;cin>>n>>k;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    priority_queue<int,vector<int>,greater<int>> pq;
    sort(a.begin(), a.end());
    //if(n==1) {cout<<a[0]+k;return;}
    for(int i=n/2;i<n;i++) pq.push(a[i]);
    while(k--)
    {
        int temp=pq.top();
        pq.pop();
        temp++;
        pq.push(temp);
    }
    cout<<pq.top()<<endl;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>

void solve()
{
    ll n,k;cin>>n>>k;
    vi a(n,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans=a[n/2];
    for(ll i=n/2;i<n-1 && k>0;) 
    {
        if(k>=(i- n/2 +1)*(a[i+1]-a[i])) {k-=(i- n/2 +1)*(a[i+1]-a[i]); ans=a[i+1]; i++;}
        else {ans+=k/(i+1-n/2);k=-1;break;}
    }
    if(k<0) k=0;
    ans+=k/((n+1)/2);
    cout<<ans<<endl;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
