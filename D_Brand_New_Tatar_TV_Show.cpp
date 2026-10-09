#include <bits/stdc++.h>

using namespace std;
void solve();

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> A(n);
    for (auto& x : A) cin >> x;
    sort(A.begin(), A.end());
    vector<pair<int, int>> a = {{A[0], 1}};
    for (int i = 1; i < n; ++i) {
        if (A[i] == A[i - 1]) a.back().second++;
        else a.emplace_back(A[i], 1);
    }

    while (a.size() > 0) {
        n = a.size();
        if (a[n - 1].second % 2 == 0) {
            cout << "YES\n";
            return;
        }
        if (n == 1) {
            cout << "NO\n";
            return;
        }
        if (a[n - 1].first - a[n - 2].first <= k) {
            cout << "YES\n";
            return;
        }
        a.pop_back();
    }
}