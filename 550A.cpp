#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool check(string s)
{
    bool f1=false,f2=false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(!f1 && s[i]=='A' && s[i+1]=='B') {f1=true;i++;continue;}
        if(!f2 && s[i]=='B' && s[i+1]=='A') {f2=true;i++;continue;}
    }
    if(f1 && f2) return true;
    return false;
}

void solve()
{
    string s;cin>>s;
    //string temp=reverse(s.begin(),s.end());
    string temp(s.rbegin(), s.rend());
    if(check(s) || check(temp)) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

int main()
{
    solve();
    
    return 0;
}