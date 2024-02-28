//Wrong output
/* 
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        int n;cin>>n;
        //set<pair<int,int>>s;
        int a[n];
        int px=0,py=0;
        int ans=0;
        for(int i=0;i<n;i++) 
        {
            int x,y;cin>>x>>y;
            if(x==0 && y==0 && i==0) ans++;
            if(x==px && py==y);
            else
            {
                int maxi=max(px,py);
                int mini=min(x,y);
                if(mini-maxi+1>0) ans+=mini-maxi+1;
                px=x,py=y;
            }
        }
        cout<<ans<<" "<<endl;
    }
    return 0;
}
*/
//Not Working
/*
#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        int n;cin>>n;
        pair<int,int> pi[n];
        for(int i=0;i<n;i++)
        {
            int x,y; cin>>x>>y;
            pi[i].first=x;
            pi[i].second=y;
        }
        // a b
        // x y
        int sum=0;
        sum += min(pi[0].first,pi[0].second) +1;
        for(int i=1;i<n-1;i++)
        {
                int a=pi[i].first , b=pi[i].second;
                int x=pi[i+1].first , y=pi[i+1].second;
                if(x<y) 
                {
                    if(x>=b) sum+= x-max(a,b)+1;
                }
                else 
                {
                    if(y>=a) sum+= y-b+1;
                }     
        }
        cout<<sum<<endl;
    }
    return 0;
}
*/

// Accepted

#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int main()
{
    int t=1;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>> vec;
        int a[n];
        int px=0,py=0;
        int ans=0;
        int d=0;
        for(int i=0;i<n;i++)
        {
            int x,y; cin>>x>>y;
            if(px==x && py==y && i!=0) continue;
            else vec.push_back({x,y});
            px=x; py=y;
        }

        if(vec.size()==1) { cout<<min(vec[0].first,vec[0].second) + 1; continue; }
        for(int i=0;i<vec.size();i++) 
        {
            int x,y;
            x=vec[i].first, y=vec[i].second;
    
            if(i==0) {ans+=min(x,y)+1; px=x;py=y; continue;}
            
            if(x==y && i!=n-1) d++;
            else
            {
                int maxi=max(px,py);
                int mini=min(x,y);
                if(mini-maxi+1>0) ans+=mini-maxi+1;
                px=x,py=y;
            }
        }
        
        cout<<ans-d<<" "<<endl;
    }
    return 0;
}