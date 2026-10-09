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

void op2(vll &a) {
    for (auto &value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void op(ll &n, vll &a) {
    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool binary_search(ll s, ll e, vll &a, ll x) {
    while (s <= e) {
        ll mid = s + (e - s) / 2;
        if (a[mid] == x) return true;
        if (a[mid] > x) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vll b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end()); 

    for (int i = 0; i < m; i++) {
        if (binary_search(0, n - 1, a, b[i])) {
            yes;
        } else {
            no;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1 ;
    //cin >> t;
    while (t--) {
        solve();
    }
}
