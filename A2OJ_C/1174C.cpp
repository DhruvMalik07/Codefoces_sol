#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int a[n+1];
    fill_n(a,n+1,0);
    int k=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            a[i]=k++;
            for(int j = i; j<=n; j += i) a[j]=a[i];        
        }
    }
    for(int i=2;i<=n;i++) cout<<a[i]<<" ";
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
