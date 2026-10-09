#include <bits/stdc++.h>
using namespace std;

// Sumit 
// IIITL

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MOD = 998244353;

ll gcd(ll a, ll b) { return (a == 0) ? b : gcd(b % a, a); }

int power(int x, int y, int p = MOD) {
    long long res = 1;
    x %= p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (1LL * x * x) % p;
    }
    return res;
}

int inv(int n, int p = MOD) { return power(n, p - 2, p); }

int ncr(int n, int r, int p = MOD) {
    if (r > n) return 0;
    if (r == 0) return 1;
    vector<int> fact(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = (1LL * fact[i - 1] * i) % p;
    return (1LL * fact[n] * inv(fact[r], p) % p * inv(fact[n - r], p) % p) % p;
}

void solve() {
    int n;
    cin >> n; 
    vll a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll res = 1;

    for (int i = 0; i < n; i += 3) {
        vi v = { (int)a[i], (int)a[i + 1], (int)a[i + 2] };
        sort(v.begin(), v.end());

        if (v[0] == v[1] && v[1] == v[2])
            res = (res * 3) % MOD;
        else if (v[0] == v[1])
            res = (res * 2) % MOD;
    }

    res = (res * ncr(n / 3, n / 6)) % MOD;
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }
}
