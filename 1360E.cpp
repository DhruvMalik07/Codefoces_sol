#include<bits/stdc++.h>
using namespace std;
 
#define cn cout<<"NO\n"
#define cy cout<<"YES\n"
 
void solve()
{
    int n; cin>>n;
    vector<string> str(n,"");
    for(int i = 0; i < n; i++) 
    cin>>str[i];

    //for(auto i:str) cout<<i<<endl;
    
    for(int i=0;i<n;i++) 
    {
        for(int j = 0; j < n; j++)
        {
            if(str[i][j]=='1' && i < n - 1 && j < n - 1 && str[i + 1][j] == '0' && str[i][j + 1] == '0') 
            {
                cn;
                return;
            }
        }
    }
    cy;
    return;
}
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
        solve();
    
    return 0;
}