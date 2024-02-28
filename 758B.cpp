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
        string s;cin>>s;
        int n=s.size();
        char a[4];
        for(int i=0; i<n; i++)
        if(s[i]!='!') a[i%4]=s[i];
        
        int r=0,b=0,y=0,g=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='!') 
            {
                if(a[i%4]=='R') r++;
                if(a[i%4]=='Y') y++;
                if(a[i%4]=='G') g++;
                if(a[i%4]=='B') b++;
            }
        }
        cout<<r<<" "<<b<<" "<<y<<" "<<g<<" ";
    }
    return 0;
}