// subsets 
/*
#include <bits/stdc++.h>
using namespace std;

void subset(string s, int index,string c)
{
    if(index==s.size()) {cout<<c<<" "; return;}
    
    subset(s,index+1,c+s[index]);
    subset(s,index+1,c);
    return; 
}

int main()
{
    string s="ABC";
    int n=3;
    subset(s,0,"");

    return 0;
}
*/

// Permutations

#include <bits/stdc++.h>
using namespace std;

void subset(string s, int l,int r)
{
    if(l==r) {cout<<s<<" "; return;}
    
    for(int i=l;i<r;i++)
    {
        swap(s[i],s[l]);
        subset(s,l+1,r);
        swap(s[i],s[l]);
    }
    return;
}

int main()
{
    string s="ABCD";
    int n=3;
    subset(s,0,n);

    return 0;
}
