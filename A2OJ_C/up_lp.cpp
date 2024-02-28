#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={0,2,2,2,7,8};
    cout<<lower_bound(a,a+6,2)-a;
    cout<<endl;
    cout<<upper_bound(a,a+6,2)-a;  /*-upper_bound(a,a+3,50)*/

    return 0;
}

// 0 indexed if we find position

// Upper bound
// It finds the position of the first element that is greater than the specified value.

// Lower bound
// It will return the position of the first element that is greater than or equal to the value.

//if value not present, both returns position where value must be present