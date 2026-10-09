#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> b; 
    ll ans = 0;

    for (ll j = 1; j <= n; j++) {
        if (a[j] >= j) continue; 

       
        auto it = lower_bound(b.begin(), b.end(), a[j]);
        ans += (it - b.begin());

       
        b.push_back(j);
    }

    cout << ans << "\n";
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
