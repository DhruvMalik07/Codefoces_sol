// TLE on test 30
/*
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
    int m,n;cin>>m>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int> mp;
    for(int i=1;i<=m;i++) mp[i]=0;
    int k=1;
    string temp="";
    for(auto i:a)
    {
        mp[i]++;
        bool flag=true;
        for(auto &j:mp) 
        {
            if(j.second<k) {flag=false;break;}
        }
        if(flag){temp+='1';k++;}
        else temp+='0';
    }
    cout<<temp;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back

int m,n,dist;
vi freq;
void done()
{
    for(int i=0;i<m;i++)
    {
        if(--freq[i]==0) dist--;
    }
}
void solve()
{
    string temp="";
    cin>>m>>n;
    vi a(n,0);
    freq.assign(m,0);
    dist=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(freq[a[i]-1]++ ==0) dist++;

        if(dist==m)
        {
            done();
            cout<<1;
        }
        else cout<<0;
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