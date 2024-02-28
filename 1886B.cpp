// Right approach, missed a small point
// Not working for all cases
/*
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
    int a,b;cin>>a>>b;
    int x1,y1;cin>>x1>>y1;
    int x2,y2;cin>>x2>>y2;
    double maxi1=sqrt(max(x1*x1+y1*y1,(x1-a)*(x1-a)+(y1-b)*(y1-b)));
    double mini1=sqrt(min(x1*x1+y1*y1,(x1-a)*(x1-a)+(y1-b)*(y1-b)));
    
    double maxi2=sqrt(max(x2*x2+y2*y2,(x2-a)*(x2-a)+(y2-b)*(y2-b)));
    double mini2=sqrt(min(x2*x2+y2*y2,(x2-a)*(x2-a)+(y2-b)*(y2-b)));
    double diff=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2.0;
    double x=max(mini1,max(mini2,diff));
    double ans=min(maxi1,min(maxi2,x));

    cout<<setprecision(10)<<ans<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    
    return 0;
}
*/

#include <bits/stdc++.h>
 
using namespace std;
 
double dist(int x1, int y1, int x2, int y2) 
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
};
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
    double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
    double ab = dist(ax, ay, bx, by);
    double ans = 1e9;
    ans = min(max(pb,ob),max(pa, oa));
    ans = min(ans, max({ab / 2, pa, ob}));
    ans = min(ans, max({ab / 2, pb, oa}));
    cout << setprecision(10) << fixed << ans <<endl;
  }
}