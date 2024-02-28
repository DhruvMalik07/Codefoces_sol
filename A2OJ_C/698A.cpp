#include<bits/stdc++.h>
using namespace std;
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

    char ch='0';
    int ans=0;
    if(a[0]==0) ans++;
    if(a[0]==1) ch='c';
    else if(a[0]==2) ch='g';
    
    for(int i=1;i<n;i++)
    {
        if(a[i]==0) ch='0',ans++;

        if(a[i]==1 && ch!='c') ch='c';
        else if(a[i]==1 && ch=='c') ch='0',ans++;

        if(a[i]==2 && ch!='g') ch='g';
        else if(a[i]==2 && ch=='g') ch='0',ans++;

        if(a[i]==3) 
        {
            if(ch=='c') ch='g';
            else if(ch=='g') ch='c';
            else if(ch=='0')
            {
                while(i<n)
                {
                    if(a[i]==1)      {ch='g';break;}
                    else if(a[i]==2) {ch='c';break;} 
                    else if(a[i]==0) {ch='c';break;}
                    i++;
                }
                i--;
            }
            else ch='c';
        }
        
    }
    cout<<ans<<endl;
    return;

}

int main()
{
    solve();
    
    return 0;
}