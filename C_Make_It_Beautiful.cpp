#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        ll b = 0;
        vector<ll> cl;    
        vector<pll> cp;      

       for (ll x : a) {
    b += __builtin_popcountll(x);
    for (ll y = x; ; ) {
        bool ok = false;
        for (ll bit = 0; bit < 60; bit++) {
            if ((y & (1LL << bit)) == 0) {
                ll c = 1LL << bit;
                if (c > k) break;
                cl.push_back(c);
                y += c;
                ok = true;
                break;
            }
        }
        if (!ok) break;
    }
}

        for (ll c : cl) cp.emplace_back(c, 1);
        sort(cp.begin(), cp.end());

        for (auto [c, g] : cp) {
            if (k >= c) {
                k -= c;
                b += g;
            } else break;
        }

        cout << b << '\n';
    }

    return 0;
}
