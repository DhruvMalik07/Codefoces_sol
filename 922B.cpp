//Accepted
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
        int n; cin>>n;
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                int k=i^j;
                if(k+i>j && k+j>i && i+j>k && k>=i && k>=j && k<=n) { /*cout<<i<<" "<<j<<" "<<k<<endl;*/ ans++; }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}