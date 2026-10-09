#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), f(n);

        for (int &x : a) cin >> x;

        for (int i = n - 1; i >= 0; i--) {
            int x = 0, y = 0;

            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) x++;
                else if (a[i] < a[j]) y++;
            }

            f[i] = max(x, y);
        }

        for (int i = 0; i < n; i++) {
            cout << f[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}