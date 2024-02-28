#include <bits/stdc++.h>
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define pb push_back
using namespace std;

int main(){
          int temp; cin>>temp;
           while(temp--)
           {
                ll n; cin>>n;
                ll a[n];
                ll st=0;
                f(i,n){
                    cin>>a[i];
                    st+= abs(a[i]);
                }   

                cout<<st<<endl;
           }
  return 0;
   }