#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b, x = "", y = "";
        cin >> a >> b;

        bool f = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                x += a[i];
                y += b[i];
            } else {
                if (f) {
                    x += '(';
                    y += ')';
                } else {
                    x += ')';
                    y += '(';
                }
                f ^= 1;
            }
        }

        int p = 0, q = 0;
        f = 1;

        for (int i = 0; i < n; i++) {
            if (x[i] == '(') p++;
            else p--;

            if (y[i] == '(') q++;
            else q--;

            if (p < 0 || q < 0)
                f = 0;
        }

        if (p != 0 || q != 0)
            f = 0;

        cout << (f ? "YES\n" : "NO\n");
    }

    return 0;
}