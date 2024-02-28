// Incorrect

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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int c=0, depth=n-1;

        for(int i=n-1;i>=0;i--) 
        {
            if(i-a[i]<depth) c+=max(depth-(i-a[i]),0);
        }
        int c=0;
        for(int i=0;i<n;i++)
        if(flag[i]) c++;

        cout<<c<<endl;
    }
    return 0;
}