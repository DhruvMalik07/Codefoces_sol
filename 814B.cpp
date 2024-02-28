//Wrong 
// messed up
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pb push_back
#define vb vector<bool>
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    vi b(n,0);
    vi ans(n,0);
    vb flag(n+1,false);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]) {ans[i]=a[i]; flag[a[i]]=true;}
        else c++;
    }

    if(c==1)
    {
        int x;
        for(int i=1;i<=n;i++) { if(!flag[i]) x=i; }
        for(int i=0;i<n;i++)  {if(ans[i]==0) {ans[i]=x;break;}} 
        for(auto i:ans) cout<<i<<" ";
    }   

    else
    {
        int x,y;
        
        for(int i=1;i<=n;i++) {if(flag[i]==false){x=i;break;}}
        for(int i=n;i>0;i--)  {if(flag[i]==false){y=i;break;}}
        
        //m1-> missing in a
        //m2-> missing in b
        int m1=x,m2=y;
        for(int i=0;i<n;i++) 
        {
            if(a[i]==x) {m1=y;break;}
        }
        for(int i=0;i<n;i++) 
        {
            if(b[i]==y) {m2=x;break;}
        }

        int p1=0,p2=0,count=0;
        for(int i=0;i<n;i++) 
        {
            if(ans[i]==0) 
            {
                count++;
                if(a[i]!=m2|| b[i]!=m1||count==2) {a[i]=m1;b[i]=m2;swap(m1,m2);}
            }
        }
        for(auto i:a) cout<<i<<" ";
    }
    
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
*/
// Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pb push_back
#define vb vector<bool>
void solve()
{
    int n;cin>>n;
    vi a(n,0);
    vi b(n,0);
    vi c(n,0);
    map<int,bool>m;
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++) {cin>>b[i]; if(b[i]==a[i]) {c[i]=b[i];m[c[i]]=1;}}

    for(int i=0;i<n;i++)
    {
        if(m[a[i]] && !m[b[i]])      {c[i]=b[i]; m[b[i]]=1;}
        else if(!m[a[i]] && m[b[i]]) {c[i]=a[i]; m[a[i]]=1;}
    }

    for(int i=0;i<n;i++)
    {
        if(!c[i])
        {
            if(!m[a[i]])
            c[i]=a[i],m[a[i]]=1;

            else if(!m[b[i]])
            c[i]=b[i],m[b[i]]=1;
        }
    }

    // for case when value in not present in any of the array 
    //4
    //1 1 3 4
    //1 4 3 4 
    for(int i=0;i<n;i++)
    {
        if(!c[i])
        {
            for(int j=1;j<=n;j++)
            {
                if(!m[j])
                {
                    m[j]=1;
                    c[i]=j;break;
                }
            }
        }
    }
    

    for(auto i:c)
    cout<<i<<" ";

    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}    