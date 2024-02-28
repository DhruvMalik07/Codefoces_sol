#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,m;cin>>n>>m;
    int count =0;

    while(n<m) 
    {
        if(m%2==0) m/=2;
        else m+=1;
        count++;
    }
    if(n>=m) count+=n-m;
    cout<<count<<endl;
    return;
}

int main()
{
    solve();   
    return 0;
}

// wrong don't know why 
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(int n, int m)
{
    if(n<0) return INT_MAX;
    if(n>=m) return n-m;
    int a=INT_MAX;
    if(m%2==0) a=solve(n,m/2)+1;
    int b=solve(n,m+1)+1;
    return min(a,b);
}

int main()
{
    int n,m;cin>>n>>m;
    cout<<solve(n,m)<<endl;
    return 0;
}
*/