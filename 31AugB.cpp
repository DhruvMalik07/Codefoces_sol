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
        int n = a.size();
        bool flag = false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1') flag=true;
        }
        (flag)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}