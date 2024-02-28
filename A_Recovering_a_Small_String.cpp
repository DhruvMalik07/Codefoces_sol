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
    int n; cin>>n;
    string s="";

                    if(n<=28)
                    {
                        
                        s += 'a'; 
                        s += 'a'; 
                        s += n-3+'a'; 
                    }
                    else
                    {
                    
                        while(n>26)
                        {
                            s.pb('z');
                            n-=26;
                        }
                       if(s.size()==2) s.pb(n-1+'a');

                       if(s.size()==1){
                        s.pb(n-2+'a');
                        s.pb('a');
                       }
                        s(s);
                    }
                    cout<<s<<endl;                
                
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}