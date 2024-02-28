// Wrong
#include<bits/stdc++.h>
using namespace std;

#define cn cout<<"NO\n"
#define cy cout<<"YES\n"

void solve()
{
    int n;
    cin >> n;
    
    int grid[n][n];
    
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
            
            if(grid[i][j] && i < n - 1 && j < n - 1 && grid[i + 1][j] == 0 && grid[i][j + 1] == 0) 
            {
                cn;
                return;
            }
        }
        cout << endl;
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
