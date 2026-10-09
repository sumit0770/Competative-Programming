#include <bits/stdc++.h>
using namespace std;
// Sumit Sangale
// IIITLucknow
typedef vector<int> vi;
typedef pair<int, int> pii;

bool is(const vector<pii>& segs, const vi& ord, int mid, int n) {
    vi cur(n, 0);

    
    for (int i = 0; i < mid; i++) {
        cur[ord[i]] = 1;
    }

   
    vi prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + cur[i];
    }

    
    for (const auto& seg : segs) {
        int l = seg.first, r = seg.second;
        int sum = prefix[r] - prefix[l];
        if (sum > (r - l) / 2) {
            return true; 
        }
    }

    return false; 
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pii> segs(m);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--; 
        segs[i] = {l, r};
    }

    int q;
    cin >> q;
    vi ord(q);
    for (int i = 0; i < q; i++) {
        cin >> ord[i];
        ord[i]--; 
    }

    int l = 0, r = q + 1, res = -1;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (is(segs, ord, mid, n)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    if (r == q + 1) {
        res = -1;
    } else {
        res = r;
    }

    cout << res << endl;
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
