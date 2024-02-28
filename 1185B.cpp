// wrong output
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
    int t;cin>>t;
    while(t--)
    {
        string a,b;cin>>a>>b;
        int n=a.size();
        int m=b.size();
        bool flag = true;
        int i=0,j=0;
        if(n>m) {cout<<"NO\n"; continue;}
        
        //if(a[0]!=b[0]) flag=false;

        while(i<n)
        {
            if(a[i]!=b[j]) {flag=false; break;}
            while(j<m)
            {
                if(a[i]==b[j]) 
                {
                    j++;
                    if(i+1<n && a[i+1]==a[i])  i++;
                }
                else break;
            }
            i++;
        }
        (flag)?cout<<"YES":cout<<"NO";
        cout<<endl;

    }
    return 0;
}
//hello
//heelo
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
vector<pair<char,int>> splitkar(string s)
{
    vector<pair<char,int>> ans;
    int c=0;
    char temp=s[0];
    for(int i=1;i<=s.size();i++)
    {
        if(s[i]!=temp)
        {
            ans.push_back({temp,c});
            temp=s[i];
            c=1;
        }
        else c++;
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a,b;cin>>a>>b;
        int n=a.size();
        int m=b.size();
        bool flag = true;
        vector<pair<char,int>> ap;
        vector<pair<char,int>> bp;
        ap=splitkar(a);
        bp=splitkar(b);
        if(ap.size() != bp.size()) flag=false;
        for(int i=0;i<ap.size();i++)
        {
            if(bp[i].first!=ap[i].first || bp[i].second<ap[i].second) flag=false;
        }
        (flag)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
