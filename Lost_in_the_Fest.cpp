#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll subk(vll &a, ll k) {
    ll n = a.size();
    int l = 0, r = 0;
    ll sum = 0, count = 0;

    while (r < n) {
        sum += a[r];
        while (sum > k && l <= r) {
            sum -= a[l];
            l++;
        }
        if (sum == k) {
            count++;
        }
        r++;
    }
    return count;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void ip(ll &n, vll &a) {
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

void op(const vll &a) {
    for (auto value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vll s(n);  
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    ll ans = 0;
    reverse(s.begin(), s.end());

    for (int i = 1; i < n; i++) {
        if (s[0] <= s[i]) {
            ans = i;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
