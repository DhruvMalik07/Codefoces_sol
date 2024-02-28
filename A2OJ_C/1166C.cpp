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
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            c+=upper_bound(a.begin(),a.end(),(a[i]-1)/2)-a.begin()-i-1;
            int x=upper_bound(a.begin(),a.end(),2*abs(a[i])) -a.begin();
            int y=upper_bound(a.begin(),a.end(),(abs(a[i])+1)/2) -a.begin();
            if(a[x]!=2*abs(a[i]) && y!=(abs(a[i]+1))/2);
            else if(a[x]==2*abs(a[i]) && y==(abs(a[i]+1))/2);
            else c--;
            c+=x-y+1;
        }
        else
        c+=upper_bound(a.begin(),a.end(),2*a[i])-a.begin()-i-1;

        //cout<<c<<endl;
    }
    cout<<c<<endl;
}

int main()
{
    solve();
    
    return 0;
}
*/

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
    vi a(n,0);
    for(int i=0;i<n;i++) {cin>>a[i];a[i]=abs(a[i]);}
    
    sort(a.begin(),a.end());
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(i&& a[i]==a[i-1]) c++;
        c+=upper_bound(a.begin(),a.end(),2*a[i]) - upper_bound(a.begin(),a.end(),a[i]);        
    }
    cout<<c<<endl;
}

int main()
{
    solve();
    
    return 0;
}