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
        int n,m;cin>>n>>m;
        if(m*log(n)==n*log(m)) cout<<"=";
        else if(m*log(n)>n*log(m)) cout<<">";
        else cout<<"<";
    }
    return 0;
}