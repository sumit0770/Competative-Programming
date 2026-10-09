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

void solve() {
    int n;
    cin >> n;

    vll even, odd;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

   
    if (odd.empty()) {
        cout << 0 << endl;
        return;
    }

    
    sort(odd.rbegin(), odd.rend());

    ll total = 0;

   
    total += odd[0];


    for (ll x : even) {
        total += x;
    }

   
    for (size_t i = 1; i < (odd.size() + 1) / 2 ; i++) {
         total += odd[i];
    }

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}