// wrong
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define s(a) sort(a.begin(),a.end())
#define f(n) for(ll i=0;i<n;i++)
#define vvi vector<vector<int>>
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
    int a,b;cin>>a>>b;
    int ct=0;
    // TLE
    /*
    int orgiB=b;
    if(b==1) b++;
    for(int i=b;i<a;i++)
    {
        int res;
        if(a%(2*i-2)==0) res=2;
        else if(a%(2*i-2)<=i) res=a%(2*i-2);
        else res=2*i-(a%(2*i-2));

        if(res==orgiB) ct++;
    }
    
    cout<<ct<<endl;
    return;
    */
    
    /*
    set<int>st;
    int temp=a-b;
    for(int i=2;1ll*i*i<=temp;i++)
    if(temp%i==0) {st.insert(i); st.insert(temp/i);}

    temp=a+b;
    for(int i=2;1ll*i*i<=temp;i++)
    if(temp%i==0) {st.insert(i); st.insert(temp/i);}
    
    for(auto i:st) if(i>=b && i<=a) ct++;
    cout<<ct<<endl;
    return;
    */
 
    /*
    set<int> st;
    int temp=a-b;
    while(1)
    {
        if(temp%2!=1)
        {   
            if((temp/2 +1) >=b) st.insert(temp/2 +1);
            temp=temp/2;
        }
        else break;
    }
    
    temp=a+b-2;
    while(1)
    {
        if(temp%2!=1)
        {   
            if((temp/2 +1) >=b) st.insert(temp/2 +1);
            temp=temp/2;
        }
        else break;
    }
    cout<<st.size()<<endl;
    return;
    */

   unordered_set<int> st, ans;
    int temp=a-b;

        for(ll i=1;1ll*i*i<=temp;i++)
        {
            if(temp%i==0)
            {
                if(i%2==0)     
                st.insert(i);
            
                if((temp/i)%2==0)
                st.insert(temp/i);
            }
        }  
    
    temp=a+b-2;

        for(ll i=1;1ll*i*i<=temp;i++)
        {
            if(temp%i==0)
            {
                if(i%2==0)     
                st.insert(i);
            
                if((temp/i)%2==0)
                st.insert(temp/i);
            }
        }

    for(auto i:st) ans.insert(1+ i/2);
    for(auto i:ans) if(i>=b) ct++;
    cout<<ct<<endl;
    return;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}