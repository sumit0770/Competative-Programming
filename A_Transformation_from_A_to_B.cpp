#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 998244353;
const int MAXN = 200005;

ll fact[MAXN], invFact[MAXN];

ll power(ll base, ll exp) {
    ll res = 1;

    while (exp) {
        if (exp & 1)
            res = res * base % MOD;

        base = base * base % MOD;
        exp >>= 1;
    }

    return res;
}

ll comb(ll n, ll r) {
    if (r < 0 || r > n)
        return 0;

    return fact[n] * invFact[r] % MOD *
           invFact[n - r] % MOD;
}

void init() {
    fact[0] = 1;

    for (int i = 1; i < MAXN; i++)
        fact[i] = fact[i - 1] * i % MOD;

    invFact[MAXN - 1] =
        power(fact[MAXN - 1], MOD - 2);

    for (int i = MAXN - 2; i >= 0; i--)
        invFact[i] =
            invFact[i + 1] * (i + 1) % MOD;
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> groups;
    int maxSize = 0;

    for (int bit = 0; (1LL << bit) <= n; bit++) {

        ll start = 1LL << bit;
        ll end = min(
            1LL * n,
            (1LL << (bit + 1)) - 1
        );

        int size = end - start + 1;

        groups.push_back({bit, size});
        maxSize = max(maxSize, size);
    }

    ll total = power(2, n);
    ll ans = 0;

    unordered_map<int, ll> pref;

    for (int cnt = 1; cnt <= maxSize; cnt++) {

        ll prod = 1;

        for (auto &[bit, size] : groups) {

            if (cnt - 1 <= size) {
                pref[bit] =
                    (pref[bit] + comb(size, cnt - 1))
                    % MOD;
            }

            prod = prod * pref[bit] % MOD;
        }

        ll ways =
            (total - prod + MOD) % MOD;

        ans = (ans + ways) % MOD;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init();

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}