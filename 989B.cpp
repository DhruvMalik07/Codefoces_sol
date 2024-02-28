#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        ll n,p;cin>>n>>p;
        string s; cin>>s;
        string t=s;
        if(s=="0.") { cout<<"01";continue; }
        if(s=="..") { cout<<"01";continue; }
        char arr[p];
        fill_n(arr,p,'.');

        for(ll i=0;i<n;i++) { if(s[i] !='.') arr[i%p]=s[i]; }
        
        for(ll i=0;i<(n/p)+1;i++)
        {
            for(ll j=0;j<n && i*p+j<n ;j++)
            {
                if(s[i*p+j]=='.')
                {
                    if(arr[j]=='1') { s[i*p+j]='0'; t[i*p+j]='0';}
                    else if(arr[j]=='0') { s[i*p+j]='1'; t[i*p+j]='1';}
                    else if(i&1) { s[i*p+j]='1'; t[i*p+j]='0';}
                    else { s[i*p+j]='0'; t[i*p+j]='1';}
                } 
            }
        }
        // cross check for perodicity

        string temp= s.substr(0,p);
        bool flag = true;
        for(ll i=0;i<n/p;i++)
        {
            if(temp!=s.substr(i*p,p) && temp!=t.substr(i*p,p)) {flag=false;break;} 
        }
        if(flag)
        {
            for(ll i=(n/p)*p;i<s.size();i++)
            {
                if(temp[i%p]!=s[i] && temp[i%p]!=t[i]) {flag=false;break;}
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<s<<endl;
         
    }
    return 0;
}