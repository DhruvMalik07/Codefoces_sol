/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n;cin>>n;
    vi a(n,0);
    f(n) cin>>a[i];
    int one=0,two=0;
    for(auto i:a) 
    {
        if(i%3==1) one++;
        else if(i%3==2) two++;
    }
    one=one%3;
    two=two%3;
    cout<<abs(one-two)<<endl;
    return;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
*/

#include <bits/stdc++.h>
#define ll long long
#define fi(i,n) for(int i=0;i<n;i++)
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define pb push_back
using namespace std;

int main(){
          int temp; cin>>temp;
           while(temp--)
           {
                 int n; cin>>n;
                 ll a[n];
                    unordered_map<int,int> mp;
                    ll s=0;
                 fi(i,n){
                    cin>>a[i];
                    s+= a[i];
                    mp[a[i]%3]++;
                 }  

              if(s%3==0)
                cout<<0<<endl;
              
              else if(s%3==2)
                cout<<1<<endl;
              
              else {
                if(mp[1]>=1){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
              }


           }
  return 0;
   }