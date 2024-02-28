//Naive approach 
//Brute force
//O(n^2*s)
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
    string a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int mini=INT_MAX;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        string s=a[i];
        int c=0;
        for(int j=0;j<n;j++)
        {
            int k=0;
            string temp=a[j];
            while(temp!=s && k<temp.size())
            {
                c++;k++;
                temp=temp.substr(1)+temp.substr(0,1);
            }
            if(k==temp.size()) flag=false;
        }
        mini=min(mini,c);
    }
    if(flag)
    cout<<mini<<endl;
    else cout<<"-1\n";

}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}