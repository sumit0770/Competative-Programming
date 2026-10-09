#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vll p;
    for (ll i = 0; i < n; i++) {
        if (a[i] == 1) {
            p.push_back(i);  
        }
    }

    if (p.empty() || (p.back() - p[0]) < k) {
      yes ;
        return;
    }
   no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
