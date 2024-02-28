#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fact(int n)
{
    ll x=1;
    for(int i=2;i<=n;i++) x*=i;
    return x;
}

void solve()
{
    string s1,s2;cin>>s1>>s2;
    bool flag=true;
    int que=0,p1=0,m1=0,p2=0,m2=0,req_p=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='+')p1++;
        else m1++;

        if(s2[i]=='+')p2++;
        else if(s2[i]=='-') m2++;
        else que++;   
    }
    
    req_p=p1-p2;
    if(que+p2<p1 || que+m2<m1){cout<<0;return;}
    if(que==0){cout<<1;return;}
    double ans=fact(que)/(fact(que-req_p)*fact(req_p))/pow(2,que);
    cout<<setprecision(15)<<ans<<endl;
}

int main()
{
    solve();
    
    return 0;
}