#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(x), b(y);

    for (int &v : a) cin >> v;
    for (int &v : b) cin >> v;

    set<int> sa(a.begin(), a.end());
    set<int> sb(b.begin(), b.end());

    vector<int> vals;
    set_union(sa.begin(), sa.end(), sb.begin(), sb.end(), back_inserter(vals));
    sort(vals.rbegin(), vals.rend());

    int ra = n, cb = m;
    ll ans = 0;

    unordered_set<int> ca, cbset;
    unordered_map<int, int> side;

    for (int v : vals) {
        bool ina = sa.count(v);
        bool inb = sb.count(v);

        if (ina && inb) {
            if (ra > 0) {
                side[v] = 0;
                ca.insert(v);
                ra--;
                ans += v;
            } else if (cb > 0) {
                side[v] = 1;
                cbset.insert(v);
                cb--;
                ans += v;
            }
        } 
        else if (ina) {
            if (ra > 0) {
                side[v] = 0;
                ra--;
                ans += v;
            } else if (cb > 0 && !ca.empty()) {
                int u = *ca.begin();
                ca.erase(u);
                cbset.insert(u);

                side[u] = 1;
                ra++;
                cb--;

                side[v] = 0;
                ra--;

                ans += v;
            }
        } 
        else {
            if (cb > 0) {
                side[v] = 1;
                cb--;
                ans += v;
            } else if (ra > 0 && !cbset.empty()) {
                int u = *cbset.begin();
                cbset.erase(u);
                ca.insert(u);

                side[u] = 0;
                cb++;
                ra--;

                side[v] = 1;
                cb--;

                ans += v;
            }
        }
    }

    if ((int)side.size() == n + m) {
        int mn = INT_MAX;
        for (auto &[v, s] : side)
            mn = min(mn, v);
        ans -= mn;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  t;
    cin >>  t;

    while ( t--) {
        solve();
    }
}