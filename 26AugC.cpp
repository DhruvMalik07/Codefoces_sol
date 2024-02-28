#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define ll long long int
#define pb push_back

void ans(int n,vi &vec, map<int,int> &m)
{
    if(n==1) return;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && (m.find(i)==m.end() || m[i]<3 )) 
        {
            m[i]++;
            vec.pb(n-i);
            ans(n-i,vec,m);
            m[i]--;
            vec.pop_back();
        }
    }
    return ;
}

int main()
{
    int n;cin>>n;
    vi vec;
    vec.pb(n);
    map<int,int> m;
    ans(n,vec,m);
    cout<<vec.size()<<endl;
    for(auto i:vec) cout<<i<<" ";

    return 0;
}
