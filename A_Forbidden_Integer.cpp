#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

typedef long long ll;

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        yes;
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
        return;
    }

    if (k == 1 || (k == 2 && n % 2 == 1)) {
        no;
        return;
    }

    yes;
    cout << n / 2 << endl;
    cout << (n % 2 == 1 ? 3 : 2) << " ";
    for (int i = 1; i < n / 2; i++) cout << 2 << " ";
    cout << endl;
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
