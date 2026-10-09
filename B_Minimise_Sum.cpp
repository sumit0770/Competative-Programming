#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> getDivs(int a, int b) {
    vector<int> res;
    for (int i = 1; i * i <= a; ++i) {
        if (a % i == 0) {
            if ((a / i) != 0 && b % (a / i) == 0)
                res.push_back(i);
            if (i != a / i && (a / (a / i)) != 0 && b % i == 0)
                res.push_back(a / i);
        }
    }
    return res;
}

bool isBeautiful(vector<int>& b, int x) {
    int n = b.size();
    vector<int> a = b;
    for (int i = 0; i < n; i++) {
        if (a[i] % x == 0) a[i] /= x;
    }
    for (int i = 0; i + 1 < n; i++) {
        if (a[i+1] % a[i] != 0) return false;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n);
        for (auto &x : b) cin >> x;

        set<int> common;
        bool first = true;
        for (int i = 0; i + 1 < n; i++) {
            if (b[i+1] % b[i] == 0) continue;

            // Collect candidates
            vector<int> c1 = getDivs(b[i], b[i+1]);
            vector<int> c2 = getDivs(b[i+1], b[i]);
            vector<int> all = c1;
            all.insert(all.end(), c2.begin(), c2.end());

            if (first) {
                common = set<int>(all.begin(), all.end());
                first = false;
            } else {
                set<int> temp;
                for (int x : all) {
                    if (common.count(x)) temp.insert(x);
                }
                common = temp;
            }
        }

        if (common.empty()) {
            cout << 1 << '\n';  // Any x works
            continue;
        }

        for (int x : common) {
            if (isBeautiful(b, x)) {
                cout << x << '\n';
                break;
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}
