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
    int temp=n;
    map<int,int> m;
    for(int i=2;i<=sqrt(temp);i++)
    {
        if(n%i==0)
        while(n%i==0) {m[i]++;n=n/i;}
    }
    
    if (n>1) m[n]++;
   
    //cout<<m.size()<<" ";
    auto it=m.begin();
    if(m.size()>=3) 
    {
        cy;
        cout<<it->first<<" "<<next(it)->first<<" "<<temp/(it->first*next(it)->first)<<endl;
    }
    else if(m.size()==2)
    {
        if(it->second+ next(it)->second < 4) cn;
        else 
        {
            cy;
            cout<<it->first<<" "<<next(it)->first<<" "<<temp/(it->first*next(it)->first)<<endl;
        }
    }
    else if(m.size()==1) 
    {
        if(it->second<6) cn;
        else 
        {
            cy;
            cout<<it->first<<" "<<it->first*it->first<<" "<<temp/(pow(it->first,3))<<endl;
        }
    }
    else cn;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}