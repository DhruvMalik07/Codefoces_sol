#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
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
    string str;cin>>str;
    vi vec;
    int c=0;
    string temp="";
    for(auto i:str) 
    if(i=='a'||i=='b') temp+=i;
    
    str=temp;

    for(int i=0;i<=str.size();i++)
    {
        if(str[i]=='a')c++;
        else {vec.pb(c+1); c=0;}
    }

    ll fact=1;
    for(auto i:vec) fact=(fact*i)%M;
 
    cout<<fact-1<<endl;
    return;
}

int main()
{
    solve();
    return 0;
}