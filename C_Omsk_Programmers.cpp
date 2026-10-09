#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    vector<pair<ll,ll>> A, B;

    ll cur = a;
    ll d = 0;
    while (true) {
        A.push_back({cur, d});
        if (cur == 0) break;
        cur /= x;
        d++;
    }

    cur = b;
    d = 0;
    while (true) {
        B.push_back({cur, d});
        if (cur == 0) break;
        cur /= x;
        d++;
    }

    ll ans = abs(a - b);   // only +1 operations

    for (auto &[va, da] : A) {
        for (auto &[vb, db] : B) {
            ans = min(ans, da + db + abs(va - vb));
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();
}