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
        int n,b;cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ro[n],re[n],lo[n],le[n];
        int odd=0, even=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&1) odd++;
            else even++;
            re[i]=even;
            ro[i]=odd;
        }
        odd=0, even=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]&1) odd++;
            else even++;
            le[i]=even;
            lo[i]=odd;
        }

        vi vec;
        for(int i=1;i<n-1;i++)
        {
            if(re[i]==ro[i] && le[i+1]==lo[i+1]) vec.pb(abs(a[i]-a[i+1]));
        }
        int len = vec.size();
        int c=0;
        sort(vec.begin(),vec.end());
        while(b>=0 && c<len)
        {
            b-=vec[c];
            if(b>=0)c++;
        }
        cout<<c<<endl;
    }
    return 0;
}