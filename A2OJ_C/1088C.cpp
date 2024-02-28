// Frequently asked que
//Working
/*
#include<bits/stdc++.h>
using namespace std;
#define M 500001
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    cout<<n+1<<endl;
    cout<<1<<" "<<n<<" "<<M<<endl;
    for(int i=0;i<n;i++)
    cout<<2<<" "<<i+1<<" "<<M+a[i]-i<<endl;

    return;
}

int main()
{
    int t=1;
    while(t--) solve();
    
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
#define M 500001
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    cout<<n+1<<endl;
    ll sum=0;
    for (int i = n - 1; i >= 0; i--)
    {
        int add = (i - (a[i] + sum) % n + n) % n;
        cout << "1 " << i + 1 << " " << add << endl;
        sum += add;
    }
    cout<<2<<" "<<n<<" "<<n<<endl;

    return;
}

int main()
{
    int t=1;
    while(t--) solve();
    
    return 0;
}

