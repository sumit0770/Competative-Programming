#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int bit = 30; bit >= 0; bit--) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (((a[i] >> bit) & 1) == 0) cnt++;
        }
        if (cnt <= k) {
            k -= cnt;
            for (int i = 0; i < n; i++) a[i] |= (1LL << bit);
        }
    }

    ll res = a[0];
    for (int i = 1; i < n; i++) res &= a[i];
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
