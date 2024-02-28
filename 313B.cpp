#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve()
{
    string s;cin>>s;
    int n=s.size();
    vi a(n,0);
    a[0]=0;
    for(int i=1;i<n;i++) 
    {
        a[i]=a[i-1];
        if(s[i]==s[i-1]) a[i]++;
    }
    int k;cin>>k;
    int x,y;

    while(k--)
    {
        cin>>x>>y;
        x--;y--;
        cout<<a[y]-a[x]<<endl;
    }
    return;
}

int main()
{
    solve();
    
    return 0;
}