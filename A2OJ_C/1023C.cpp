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
    int n,k;cin>>n>>k;
    string s; cin>>s;
    int c=0,o=0;
    string temp="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            if(o<k/2) { o++; temp+='(';}
        } 
        else if(s[i]==')') 
        {
            if(c<o && c<k/2) {c++; temp+=')';}
        }     
    }
    cout<<temp<<endl;
}

int main()
{
    int t=1;
    while(t--)
    {solve();}
    
    return 0;
}