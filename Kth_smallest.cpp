// error
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second
//#define pb push_back

vector<pair<int, int>> p, mp;
vector<int> rlen;

int sz;

void modiji()
{
    //if (p.size() == 0) return; // Check for an empty vector
    int prev, j = -1;
    mp.push_back(p[0]);
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i].F <= prev)
        mp[j].S = max(mp[j].S, p[i].S);
        else
        mp.emplace_back(p[i].F, p[i].S);
    }
    return;
}

int bsearch(int val)
{
    int l = 0, r = sz;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (rlen[mid] < val && (val >= sz || rlen[mid + 1] >= val))
        {
            if (val >= sz)
                return -1;
            return mp[mid].F + val - rlen[mid] - 1;
        }
        else if (rlen[mid] < val)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1; // return -1 if the value is not found
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Input
        int n, nq;
        cin >> n >> nq;
        int a, b;

        p.resize(n); // Initialize the size of vector p

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            p[i].first = a;
            p[i].second = b;
        }
        sort(p.begin(), p.end());
        modiji(); // tackle overlapping ranges
        sz = mp.size();
        rlen.push_back(0);
        for (int i = 0; i < sz; i++)
            rlen.push_back(mp[i].S - mp[i].F + 1 + rlen.back());

        for(auto i:rlen) cout<<i<<" ";
        while (nq--)
        {
            int x;
            cin >> x;
            cout << bsearch(x) << endl;
        }
    }
    return 0;
}
