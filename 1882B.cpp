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
    int n;cin>>n;
    int k=0;
    vector<vector<int>> vec(n,vector<int>());
    while(n--)
    {
        int x;
        int m; cin>>m;
        for(int i=0;i<m;i++) {cin>>x;vec[k].pb(x);}
        k++;
    }
    unordered_set<int> s;
    for(auto i:vec)
    {
        for(auto j:i) s.insert(j);
    }
    int maxi=0 , len=s.size();

    for(auto j:s)
    {
        // don't consider j and count maxi 
        // if maxi==s.size()-1 break;

        unordered_set<int> temp;
        bool flag;
        for(auto i:vec)
        {
            flag=true;
            for(auto l:i)
            {
                if(l==j) flag=false;
            }
            if(flag) for(auto l:i)  temp.insert(l);
        }
        
        maxi=max(maxi,(int)temp.size());
        if(maxi==len-1) break;
    }
    cout<<maxi<<endl;
    


}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}