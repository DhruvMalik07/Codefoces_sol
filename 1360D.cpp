#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(n<=k) {cout<<1<<endl;}
        else{
        long long int s=ceil(sqrt(n));

        int fact=1;
        int maxi=-1;
        for(int i=1;i<=s&&i<=k;i++)
        {
            if(n%i==0) 
            {
                   if(n/i<=k)        fact=n/i;
                   else fact=i;
                   
                   maxi=max(maxi,fact);
            }
        }
        //if(n>=k) cout<<1<<endl;
        cout<<(n/maxi)<<endl;
        }
    }

    return 0;
}