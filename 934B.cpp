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
        string temp="";
        if(n>36) cout<<"-1";
        else 
        {
            if(n%2!=0) temp+='4';
            for(int i=0;i<n/2;i++) temp+='8';
        }
        cout<<temp<<endl;
    }
    return 0;
}