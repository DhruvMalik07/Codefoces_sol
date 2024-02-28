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
        int odd=0;
        for(int i=0;i<n;i++) {cin>>a[i]; if(a[i]%2!=0) odd++;}

        if(odd >0 && odd <n) sort(a,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        
    }
    return 0;
}