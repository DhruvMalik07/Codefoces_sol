#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
int main(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    

    sort(arr,arr+n);
    for(int i=1;i<n;i++) arr[i]+=arr[i-1];
    while(q--){
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        ll minIndex=-1;

       if(x!=n)
       ans=arr[n-x+y-1]-arr[n-x-1];
       
       else ans=arr[n-x+y-1];

        cout<<ans<<endl;
    }
    return 0;
}