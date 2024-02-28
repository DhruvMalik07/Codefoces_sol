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
    string s;cin>>s;
    char temp=s[0];
    cout<<"Mike\n";
    for(int i=1;i<s.size();i++)
    {
        if(s[i]<=temp) {temp=s[i];cout<<"Mike\n";}
        else cout<<"Ann\n";
    }
    return;

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}