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
    string str;cin>>str;
    ll n;cin>>n;
    // c candy   s star
    ll c=0,s=0;
    for(auto i:str)
    {
        if(i=='?') c++;
        else if(i=='*') s++;
    }
    int l=str.length();
    //cout<<l<<" "<<c<<" "<<s<<endl;
    l=l-c-s;
    //cout<<l<<endl;
    if(s==0)
    {
        if(n>l || n<l-c) cout<<"Impossible\n";
        else 
        {
            ll skip = l-n;
            for(int i=0;i<str.length();i++)
            {
                if(i<str.length()-1 && str[i+1]=='?' && skip>0) {skip--;continue;} 
                if(str[i]=='?' || str[i]=='*') continue;
                else cout<<str[i];
            }
        }
    }

    else 
    {
        if(n<l-c-s) cout<<"Impossible\n";
        else if(l<n) 
        {
            ll temp=n-l;
            for(int i=0;i<str.length();i++)
            {
                if(i<str.length()-1 && str[i+1]=='*')
                {
                    while(temp>0) {cout<<str[i];temp--;}
                }
                if(str[i]=='?' || str[i]=='*') continue;
                cout<<str[i];
            }
        }
        else 
        {
            ll skip=l-n;
            for(int i=0;i<str.length();i++)
            {
                if(i<str.length()-1 && (str[i+1]=='?' || str[i+1]=='*') && skip>0) {skip--;continue;}
                if(str[i]=='?' || str[i]=='*') continue; 
                else cout<<str[i];
            }
        }
    }
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}