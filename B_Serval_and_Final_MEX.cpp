#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<pair<int, int> > op;
    int mid = n / 2;
    int r = n;

    
    if (find(a.begin() + mid, a.end(), 0) != a.end()) {
        op.push_back(make_pair(mid + 1, n));
        r -= (n - mid - 1);
    }

   
    if (find(a.begin(), a.begin() + mid, 0) != a.begin() + mid) {
        op.push_back(make_pair(1, mid));
        r -= (mid - 1);
    }

    
    op.push_back(make_pair(1, r));

    // Output the result
    cout << op.size() << "\n";
    for (auto [l, r] : op) {
        cout << l << " " << r << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
