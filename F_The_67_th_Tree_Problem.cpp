#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long n = x + y;
        long long d = y - x;

        if ((x == 0 && n % 2 == 0) || (n / 2 < x)) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        long long mm = 2 * x + (d % 2);

        for (long long i = 2; i <= mm; i++) {
            cout << i - 1 << " " << i << "\n";
        }

        for (long long i = mm + 1; i <= n; i++) {
            cout << mm << " " << i << "\n";
        }
    }

    return 0;
}