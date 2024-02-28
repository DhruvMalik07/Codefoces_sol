//TLE on test 4
/*
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
        set<int>s;
        // LCM -> i*n/gcd
        for(int i=1;i<=n;i++)
        {
            s.insert(n/__gcd(i,n));
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
*/
// Euler Totient Function
/*
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
        if(n==2) {cout<<2;break;}
        int totient[n+1];
        for(int i=0;i<=n;i++) totient[i]=i;
        for(int i=2;i<=n;i++)
        {
            if(totient[i]==i)
            {
                for(int j=2*i;j<=n;j+=i)
                {
                    totient[j]*=(i-1);
                    totient[j]/=i;
                }
                totient[i]=i-1;
            }
        }
        cout<<totient[n]<<endl;
    }
    return 0;
}
*/
//ans-> no of divisors 
//Working
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
        ll n;cin>>n;
        if(n==1) {cout<<1<<endl;break;}
        if(n==2) {cout<<2<<endl;break;}
        if(n==3) {cout<<2<<endl;break;}
        ll c=0;
        ll x=sqrt(n);
        double y= sqrt(n);
        for(int i=1;i<=x;i++)
        {
            if(n%i==0) c++;
        }
        c=c*2;
        if(x==y)c--;
        cout<<c<<endl;
    }
    return 0;
}