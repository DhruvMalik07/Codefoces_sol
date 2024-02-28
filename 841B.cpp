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
        ll sum=0, odd=0;
        for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i]; if(a[i]&1) odd++;}
        if(sum&1 || odd>0) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}