#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back
int ans(int n)
{
    //int y=n;
    while(n>10)
    {
        n=n/10;
    }
    return n;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x= ans(n);
        if(x==1) cout<<13;
        if(x==2) cout<<29;
        if(x==3) cout<<37;
        if(x==4) cout<<47;
        if(x==5) cout<<59;
        if(x==6) cout<<67;
        if(x==7) cout<<79;
        if(x==8) cout<<89;
        if(x==9) cout<<97;
        
        cout<<endl;
    }
    return 0;
}