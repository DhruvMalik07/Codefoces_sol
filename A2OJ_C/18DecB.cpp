// Working 
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
    string s;cin>>s;
    int n=s.size();
    int a[n][2];
    //memset(a,0,a.size());
    int one=0,zero=0;
    for(int i=0;i<n;i++) 
    {
        if(s[i]=='0') zero++;
        else one++;

        a[i][1]=one;
        a[i][0]=zero;
    }
    
    int i=n-1;
    for(;i>=0;i--)
    {
        if(a[i][0]==one && a[i][1]==zero) break;

        if(one>a[i][0])one--;
        else zero--;
    }
    cout<<n-i-1<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}