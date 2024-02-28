#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve()
{
    vi a(3,0);
    vi b(3,0);
    for(int i=0;i<3;i++) cin>>a[i]>>b[i];
    cout<<3<<endl;
    cout<<a[0]+a[1]-a[2]<<" "<<b[0]+b[1]-b[2]<<endl;
    cout<<a[0]-a[1]+a[2]<<" "<<b[0]-b[1]+b[2]<<endl;
    cout<<-a[0]+a[1]+a[2]<<" "<<-b[0]+b[1]+b[2]<<endl;
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}