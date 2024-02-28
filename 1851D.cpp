// solved myself on paper

#include <bits/stdc++.h>
using namespace std;
#define cn cout << "NO\n"
#define cy cout << "YES\n";
typedef long long ll;

ll n;

bool isPermutation(vector<ll> a) {
    for (int i = 0; i < n; ++i) {
        if (a[i] <= 0 || a[i] > n) {
            return false;
        }
    }
    set<ll> s(a.begin(), a.end());
    return s.size() == n;
}

vector<ll> prefSumToArray(vector<ll> p) {
    vector<ll> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i) {
        res[i] = p[i] - p[i - 1];
    }
    return res;
}

void solve() {
    cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i + 1 < n; ++i) {
        cin >> a[i];
    }
    ll x = n * (n + 1) / 2;
    if (a.back() != x) {
        a.push_back(x);
        vector<ll> b = prefSumToArray(a);
        if (isPermutation(b)) {
            cy;
        } else {
            cn;
        }
        return;
    }
    map<ll, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n - 1; ++i) {
        cnt[a[i] - a[i - 1]]++;
    }
    vector<int> cntGt1;
    for (auto p: cnt) {
        if (p.second > 1) {
            cntGt1.push_back(p.first);
        }
    }
    if (cntGt1.size() > 1) {
        cn;
        return;
    }
    if (cntGt1.size() == 1) {
        int x1 = cntGt1[0];
        if (cnt[x1] > 2) {
            cn;
            return;
        }
    }
    vector<int> cnt0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == 0) {
            cnt0.push_back(i);
        }
    }
    if (cnt0.size() != 2) {
        cn;
        return;
    }
    //4 5 1 2 3 
    //4 9 10 12 15
    // given 9 10 12 15 this case is coverd here 
    // cntGt1 is empty for this case
    cy;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    for (int _ = 0; _ < t; ++_) {
        solve();
    }
    return 0;
}
