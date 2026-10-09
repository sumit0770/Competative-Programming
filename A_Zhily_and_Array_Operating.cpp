#include <bits/stdc++.h>
using namespace std;

int t, n, c;
long long a[2000005];
vector<int> v;

int main() {
    cin >> t;

    while (t--) {
        v.clear();
        c = 0;

        cin >> n;

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = n - 1; i >= 1; i--) {
            if (a[i + 1] > 0) {
                v.push_back(i);
                a[i] += a[i + 1];
            }
        }

        for (int i = 1; i <= n; i++) {
            if (a[i] > 0)
                c++;
        }

        cout << c << '\n';
    }
}