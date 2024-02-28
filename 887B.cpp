//Majdoori brute force
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
    int n;
    cin >> n;
    vvi a(n, vi(6));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> a[i][j];
        }
    }
    int c = 0;

    if (n == 1)
    {
        for (int i = 1; i <= 6; i++)
        {
            if (find(a[0].begin(), a[0].end(), i) == a[0].end()) {
                cout << c;
                return;
            }
            c++;
        }
    }

    if (n == 2)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (find(a[0].begin(), a[0].end(), i) == a[0].end() && find(a[1].begin(), a[1].end(), i) == a[1].end()) {
                cout << c;
                return;
            }
            c++;
        }
        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (((find(a[0].begin(), a[0].end(), i) != a[0].end() && find(a[1].begin(), a[1].end(), j) != a[1].end()) ||
                     (find(a[1].begin(), a[1].end(), i) != a[1].end() && find(a[0].begin(), a[0].end(), j) != a[0].end())))
                    c++;
                else {
                    cout << c;
                    return;
                }
            }
        }
    }

    if (n == 3)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (find(a[0].begin(), a[0].end(), i) == a[0].end() && find(a[1].begin(), a[1].end(), i) == a[1].end() && find(a[2].begin(), a[2].end(), i) == a[2].end()) {
                cout << c;
                return;
            }
            c++;
        }
        for (int i = 1; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (((find(a[0].begin(), a[0].end(), i) != a[0].end() && find(a[1].begin(), a[1].end(), j) != a[1].end()) ||
                     (find(a[1].begin(), a[1].end(), i) != a[1].end() && find(a[0].begin(), a[0].end(), j) != a[0].end())) ||
                    ((find(a[0].begin(), a[0].end(), i) != a[0].end() && find(a[2].begin(), a[2].end(), j) != a[2].end()) ||
                     (find(a[2].begin(), a[2].end(), i) != a[2].end() && find(a[0].begin(), a[0].end(), j) != a[0].end())) ||
                    ((find(a[2].begin(), a[2].end(), i) != a[2].end() && find(a[1].begin(), a[1].end(), j) != a[1].end()) ||
                     (find(a[1].begin(), a[1].end(), i) != a[1].end() && find(a[2].begin(), a[2].end(), j) != a[2].end())))
                    c++;
                else {
                    cout << c;
                    return;
                }
            }
        }
    }
}

int main()
{
    int t=1;
    while (t--)
        solve();

    return 0;
}
