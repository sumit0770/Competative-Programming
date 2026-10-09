#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

void code() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 3; i <= 100; i++) {
        if (n % i == 0 || n % i == i - 1) {
            vector<int> q(n);
            for (int j = 0; j < n; j++) {
                q[j] = a[j] / i * i + (i - a[j] % i) % i;
            }
            for (auto x : q) {
                cout << x << ' ';
            }
            cout << '\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        code();
    }
    return 0;
}
