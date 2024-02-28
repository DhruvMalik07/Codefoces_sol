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
        int n=14;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=INT_MIN;

        while(--n)
        {
            int x=13-n;
            if(a[x]==0) continue;
            else
            {
                int y = a[x];
                int temp[14];
                //copy(begin(a), end(a), begin(temp));
                for(int i=0;i<14;i++) temp[i]=a[i];
                temp[x]=0;
                int c=1;
                int alpha=y/14;
                for(int i=0;i<14;i++) temp[i]+=alpha;
                y=y%14;
                while(y--)
                {
                    temp[(x + c)%14]+=1;
                    c++;
                }
                int z=0;
                for(int i=0;i<14;i++) if(temp[i]%2==0) z+=temp[i];
                ans = max(ans,z);
            }
        }
        cout<<ans<<endl;
    
    return 0;
}