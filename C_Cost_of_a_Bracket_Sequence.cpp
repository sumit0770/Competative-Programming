#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<long long> pref_open(n + 1, 0);
    vector<long long> pref_close(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref_open[i + 1] = pref_open[i] + (s[i] == '(');
        pref_close[i + 1] = pref_close[i] + (s[i] == ')');
    }

    long long total_close = pref_close[n];

    long long pos = n;

    for (int i = 0; i < n; i++) {
        long long cur =
            pref_open[i] + total_close - pref_close[i];

        long long best =
            pref_open[pos] + total_close - pref_close[pos];

        if (cur < best) {
            pos = i;
        }
    }

    string ans(n, '0');

    for (int i = 0; i < pos; i++) {
        if (k > 0 && s[i] == '(') {
            ans[i] = '1';
            k--;
        }
    }

    for (int i = pos; i < n; i++) {
        if (k > 0 && s[i] == ')') {
            ans[i] = '1';
            k--;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}