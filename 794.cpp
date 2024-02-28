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
        double n,h;cin>>n>>h;
        for(int i=1;i<n;i++) 
        { cout<<setprecision(10)<<sqrt((i*h*h)/(n))<<" "; }
    }
    return 0;
}