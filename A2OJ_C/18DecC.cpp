// wrong
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
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[30];
        int n,m;cin>>n>>m;

        if(n==1) a[m]++;
        else
        {
            int req[30];
            int j=29;
            whlie(j>=0)
            {
                req[j]=n/pow(2,j);
                j--;
            }
        }

    }

}

int main()
{
    solve();
    
    return 0;
}