#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool found = false;
        for (int i = 0; i < n - 1 && !found; ++i) {
            if (a[i] > a[i + 1]) {
                cout << "YES\n";
                cout << "2\n";
                cout << a[i] << " " << a[i + 1] << '\n';
                found = true;
            }
        }

        if (!found) cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
