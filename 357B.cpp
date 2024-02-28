// Something went wrong
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
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
    ll n,m;cin>>n>>m;
    vi a(n+1,0);
    vi colour(n+1,0);
    vvi adj(n+1,vi());
    for(int i=0;i<m;i++)
    {
        int x,y,z; cin>>x>>y>>z;
        a[x]++, a[y]++, a[z]++;
        adj[x].pb(y); adj[x].pb(z);
        adj[y].pb(x); adj[y].pb(z);
        adj[z].pb(x); adj[z].pb(y);
    }
    pair<int,int> p[n];
    for(int i=1;i<=n;i++) p[i-1].first=i, p[i-1].second=a[i];
    sort(p,p+n,[](auto x,auto y){return x.second > y.second;});
    
    for(int i=0;i<n;i++)
    {
        int d=p[i].first;
        bool flag[3]={true,true,true};
        for(auto j:adj[d]) 
        {
            if(colour[j]!=0) flag[colour[j]-1]=false;
        }
        int c=0;
        for(int i=0;i<3;i++) if(flag[i]) {c=i+1; break;}
        colour[d]=c;
    }
    for(int i=1;i<=n;i++) cout<<colour[i]<<" ";
    cout<<endl;
}

int main()
{
    solve();
    
    return 0;
}
*/

// Working
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<ll>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    ll n,m; cin>>n>>m;
    vvi vec;
    for(int i=0;i<m;i++) 
    {
        ll x,y,z; cin>>x>>y>>z;
        vec.pb({x,y,z});
    }

    vi colour(n+1,0);
    colour[vec[0][0]]=1;
    colour[vec[0][1]]=2;
    colour[vec[0][2]]=3;
    for(int i=1;i<m;i++)
    {
        set<ll> st;
        st.insert(vec[i][0]),st.insert(vec[i][1]),st.insert(vec[i][2]);
        st.insert(vec[i-1][0]),st.insert(vec[i-1][1]),st.insert(vec[i-1][2]);
        //if(st.size()==6) { colour[vec[i][0]]=1;colour[vec[i][1]]=2;colour[vec[i][2]]=3; }

        //else if(vec[i][0]==vec[i-1][0] ||vec[i][0]==vec[i-1][1] ||vec[i][0]==vec[i-1][2]) 
        if(colour[vec[i][0]]!=0)
        {
            int c=colour[vec[i][0]];
            vector<int>ct;
            for(int i=1;i<=3;i++) if(i!=c) ct.pb(i);
            colour[vec[i][1]]=ct[0];
            colour[vec[i][2]]=ct[1];
        }

        //else if(vec[i][1]==vec[i-1][0] ||vec[i][1]==vec[i-1][1] ||vec[i][1]==vec[i-1][2])
        else if(colour[vec[i][1]]!=0)
        {
            int c=colour[vec[i][1]];
            vector<int>ct;
            for(int i=1;i<=3;i++) if(i!=c) ct.pb(i);
            colour[vec[i][0]]=ct[0];
            colour[vec[i][2]]=ct[1];
        }

        //else if(vec[i][2]==vec[i-1][0] ||vec[i][2]==vec[i-1][1] ||vec[i][2]==vec[i-1][2]) 
        else if(colour[vec[i][2]]!=0)
        {
            int c=colour[vec[i][2]];
            vector<int>ct;
            for(int i=1;i<=3;i++) if(i!=c) ct.pb(i);
            colour[vec[i][0]]=ct[0];
            colour[vec[i][1]]=ct[1];
        }
        else { colour[vec[i][0]]=1;colour[vec[i][1]]=2;colour[vec[i][2]]=3; }
    }
    for(int i=1;i<=n;i++) cout<<colour[i]<<" ";
    cout<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}