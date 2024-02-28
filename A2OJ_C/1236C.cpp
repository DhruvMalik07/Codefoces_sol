// Accepted 
// instead shifting one postition on each columns 
// reverse order of consecutive columns 
//1 8 9  16
//2 7 10 15
//3 6 11 14
//4 5 12 13

#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define ll long long int
#define pb push_back
void solve()
{
    int n;cin>>n;
    int a[n][n];
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&1==1) a[n-1-j][i]=k++;
            else a[j][i]=k++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}