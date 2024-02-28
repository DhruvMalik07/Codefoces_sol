// If we are running loops till n or m like in string 
// then, there's a problem in storing value of c in vec
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
    int n,m,k;cin>>n>>m>>k;
    char a[n][m];
    ll dot=0;
    for(int i=0;i<n;i++) 
    { for(int j=0;j<m;j++) {cin>>a[i][j]; if(a[i][j]=='.') dot++;}}
     
    if(k==1) {cout<<dot; return;}

    vi vec;
    for(int i=0;i<n;i++) 
    { 
        int c=0;
        for(int j=0;j<m;j++) 
        {
            if(a[i][j]=='.' && j<m-1) c++;
            else if(j==m-1 && a[i][j]=='.') vec.pb(++c);
            else {vec.pb(c);/*cout<<c<<" "<<i<<" "<<j<<endl;*/c=0;}
        }
    }

    for(int i=0;i<m;i++) 
    { 
        int c=0;
        for(int j=0;j<n;j++) 
        {
            if(a[j][i]=='.'&& j<n-1) c++;
            else if(j==n-1 && a[j][i]=='.') vec.pb(++c);
            else {vec.pb(c);/*cout<<c<<" "<<i<<" "<<j<<endl;*/c=0;}
        }
    }

    ll sum=0;
    for(auto i:vec)
    {
        //cout<<i<<" ";
        if(i<k) continue;
        sum+= i-k+1;
    }
    cout<<sum<<endl;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}