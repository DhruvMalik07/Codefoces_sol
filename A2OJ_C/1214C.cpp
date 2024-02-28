// Wrong on test 11
// Same logic still error 
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
    ll n;cin>>n;
    string s; cin>>s;
    if(n&1) {cout<<"NO\n"; return 0;}
    ll o=0,c=0,z=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(') o++;
        else c++;
        if(c>o) z++;
    }
    if(z>1 || c!=o) cout<<"NO\n";
    else cout<<"YES\n";
         
    return 0;
}
*/

// Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
    ll n;cin>>n;
    string s; cin>>s;
    if(n&1) {cout<<"NO\n"; return 0;}
    ll k=0,m=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(') k++;
        else k--;
        m=min(m,k);
    }
    if(m>=-1 && k==0) cout<<"YES\n";
    else cout<<"NO\n";
         
    return 0;
}