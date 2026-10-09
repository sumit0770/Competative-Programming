#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    unordered_map<ll, ll> freq;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll l = 0, r = 0;
    ll maxlen = 0, x = -1, y = -1;

    while (r < n) {
        if (freq[a[r]] == 1) {
            ll len = r - l + 1;
            if (len > maxlen) {
                maxlen = len;
                x = l;
                y = r;
            }
            r++;
        } else {
            r++;
            l = r;
        }
    }

    if (x == -1 || y == -1)
        cout << "-1 -1\n";
    else
        cout << x + 1 << " " << y + 1 << "\n"; // 1-based index
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0; // prevent crash on bad input
    while (t--) {
        solve();
    }
}
