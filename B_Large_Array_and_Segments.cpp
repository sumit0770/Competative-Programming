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

void ip(ll n, vll &a) {
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

void op(vll &a) {
    for (auto &value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    
    vll a;
    ip(n, a);

    ll sizee = n * k;
    vll prefix(sizee + 1, 0); 

    for (ll i = 0; i < sizee; i++) {
        prefix[i + 1] = prefix[i] + a[i % n];
    }

    ll diff = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
    ll ans = diff * ( diff + 1 ) /2 ;
     if (diff > sizee) {  // Fix: Correct boundary check
        cout << 0 << endl;
    } else {
        cout << ans  << endl;
    }
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
