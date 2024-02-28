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
    int n,k;cin>>n>>k;
    string str;cin>>str;
    set<char> s;
    for(int i=0;i<n;i++) s.insert(str[i]);

    if(n<k) 
    {
        cout<<str;
        int temp=k-n;
        while(temp--) cout<<*s.begin();
    }

    else
    {
        n=min(n,k);
        set<char>::iterator temp ;
        int i=n-1;
        for(;i>=0;i--)
        {
            //auto temp;
            if(str[i]!=*s.rbegin())
            {
                temp = s.find(str[i]);
                ++temp;
                break;
            }          
        }
            string ans="";
            ans+= str.substr(0,i)+(*temp);
            int x=n-i-1;
            while(x--) ans+=(*s.begin());

            cout<<ans;
    }
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define minus cout << "-1\n"
#define pb push_back

void solve() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    set<char> s;

    for (int i = 0; i < n; i++) s.insert(str[i]);

    if (n < k) {
        cout << str;
        int temp = k - n;
        while (temp--) cout << *s.begin();
    } else if (n == k) {
        string ans = "";
        for (int i = n - 1; i >= 0; i--) {
            set<char>::iterator temp;
            if (str[i] != *s.rbegin()) {
                temp = s.find(str[i]);
                ++temp;
            } else {
                temp = s.end();
            }
            string temp_str = "";
            if (i == 0) {
                temp_str += (*temp);
            } else {
                temp_str += str.substr(0, i - 1) + (*temp);
            }
            int x = n - i - 1;
            while (x--) temp_str += *s.begin();
            reverse(temp_str.begin(), temp_str.end());
            ans += temp_str;
        }
        cout << ans;
    }
}

int main() {
    int t = 1;
    while (t--)
        solve();

    return 0;
}
*/