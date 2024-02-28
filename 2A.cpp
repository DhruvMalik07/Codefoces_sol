// Not Working
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define f(n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    map<string,int> m;
    vector<string> s(n,"");
    vector<int> a(n,0);
    f(n) {cin>>s[i]>>a[i]; m[s[i]]+=a[i];}
    int maxi=INT_MIN;
    for(auto [i,j]:m)
    maxi=max(maxi,j);

    vector<string> vec;
    for(auto [i,j]:m)
    {
        if(j==maxi) {vec.pb(i);}
    }
    if(vec.size()==1) {cout<<vec[0]<<endl;return;}
 
    m.clear();
    for(auto i:vec) m[i]=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(s[i])!=m.end()) m[s[i]]+=a[i];
        if(m[s[i]]>=maxi) {cout<<s[i]<<endl;break;}
    }
    return;

}

int main()
{
    solve();
    
    return 0;
}