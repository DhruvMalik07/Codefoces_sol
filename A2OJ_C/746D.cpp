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
    // a-> green , b-> black
    string ans="";
    int n,k,a,b;cin>>n>>k>>a>>b;
    int maxi=max(a,b);
    int mini=min(a,b);
    
    if(mini==0&&maxi>k) {cn;return;}
    else if(mini==0&&maxi<=k)  {for(int i=0;i<maxi;i++) {if(maxi==a) ans+="G"; else ans+="B";} cout<<ans;return;}
    int c=maxi/k;
    if(maxi%k>0 && c>0) c++;
    c--;

    if(mini<c) cn;
    else
    {
        
        int x=maxi/mini;
        int rem=maxi%mini;
        int temp=mini;
        int xfactor=rem;
        int y=temp-rem;

        if(rem>k)
        {
            while(xfactor--)
            {
                for(int i=0;i<x+1;i++) {if(maxi==a) ans+="G"; else ans+="B";}
                if(mini==b) ans+="B"; else ans+="G";
            }
            
            while(y--)
            {
                for(int i=0;i<x;i++) {if(maxi==a) ans+="G"; else ans+="B";}
                if(mini==b) ans+="B"; else ans+="G";
            }
        }
        
        else
        {
            while(temp--)
            {
                for(int i=0;i<x;i++) {if(maxi==a) ans+="G"; else ans+="B";}                     
                if(mini==b) ans+="B"; else ans+="G";
            }
            for(int i=0;i<rem;i++) {if(maxi==a) ans+="G"; else ans+="B";}
        }
        
        cout<<ans<<endl;
    }
    return;

}

int main()
{
    solve();   
    return 0;
}
