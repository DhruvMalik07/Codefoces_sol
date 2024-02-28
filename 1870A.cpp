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
    int t;cin>>t;
    while(t--)
    {
        int n,k,x;cin>>n>>k>>x;
        if(k>n || k-1>x) {cout<<"-1\n"; continue;}
        //if(n>=x)
        
            if(k<x) { cout<< k*(k-1)/2  +(n-k)*x<<endl;continue; }
            else if(k==x+1)  { cout<< k*(k-1)/2 +(n-k)*x<<endl;continue; }
            else 
            {
                cout<< k*(k-1)/2 +(n-k)*(x-1)<<endl;continue;
            }
        
        //else cout<< k*(k-1)/2 + (n-k)*x <<endl;continue;
    }
    return 0;
}