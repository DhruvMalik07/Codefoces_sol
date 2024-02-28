#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    cout<<s[0]<<s[1];
    for(int i=2;i<n;i++)
    {
        if(check(s[i]) && check(s[i+1])) {cout<<s[i]<<"."<<s[i+1]<<s[i+2];i+=2;}
        else {cout<<"."<<s[i]<<s[i+1];i++;}
    }
    cout<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}