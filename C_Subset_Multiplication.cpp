#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Get all divisors of a number
vector<int> get_divisors(int x) {
    vector<int> res;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            res.push_back(i);
            if (i != x / i)
                res.push_back(x / i);
        }
    }
    return res;
}

bool check_valid(vector<int> b, int x) {
    int n = b.size();
    for (int i = 0; i < n; i++) {
        if (b[i] % x == 0)
            b[i] /= x;
    }
    for (int i = 0; i + 1 < n; i++) {
        if (b[i + 1] % b[i] != 0)
            return false;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        set<int> candidates;
        bool first = true;

        for (int i = 0; i + 1 < n; i++) {
            if (b[i + 1] % b[i] == 0)
                continue;

            set<int> curr;

            int g = gcd(b[i], b[i + 1]);

            // try dividing b[i+1] to make it divisible by b[i]
            int d1 = b[i + 1] / g;
            for (int x : get_divisors(d1)) {
                if ((b[i + 1] / x) % b[i] == 0)
                    curr.insert(x);
            }

            // try dividing b[i] to make it divisible by b[i+1]
            int d2 = b[i] / g;
            for (int x : get_divisors(d2)) {
                if ((b[i] / x) % b[i + 1] == 0)
                    curr.insert(x);
            }

            if (first) {
                candidates = curr;
                first = false;
            } else {
                set<int> next;
                for (int x : curr) {
                    if (candidates.count(x))
                        next.insert(x);
                }
                candidates = next;
            }
        }

        if (candidates.empty()) {
            cout << 1 << '\n'; // no bad pairs
            continue;
        }

        bool found = false;
        for (int x : candidates) {
            if (x == 1) continue; // ignore trivial
            if (check_valid(b, x)) {
                cout << x << '\n';
                found = true;
                break;
            }
        }
        if (!found) cout << 1 << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
