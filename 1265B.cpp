// TLE on test 5
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back

bool check(set<int> &s)
{
    int x= *s.begin();
    int y= *s.rbegin();
    if(y-x+1==s.size()) return true;
    return false;
}

void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int arr[n+1];
    fill_n(arr,n+1,0);

    for(int i=0;i<n;i++) arr[a[i]]=i+1;
    set<int>s;
    string temp="";
    for(int i=1;i<n;i++)
    {
        s.insert(arr[i]);
        if(check(s)) temp+='1';
        else temp+='0';
    }
    temp+="1";
    cout<<temp<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}