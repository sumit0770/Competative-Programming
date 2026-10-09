#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') one++;
    }

    int ans = 0;
    for (int j = n - one; j < n; j++) { 
        if (s[j] != '1') ans++;
    }

    cout << ans << endl;
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