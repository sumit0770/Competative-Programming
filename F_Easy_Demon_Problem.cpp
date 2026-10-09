#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int N = 4e5 + 5;
bool pa[N], na[N], pb[N], nb[N], ppos[N], pneg[N];

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;
    
    vector<int> a(n), b(m);
    int sa = 0, sb = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sa += a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        sb += b[i];
    }

    for (int i = 0; i < n; i++) {
        int d = sa - a[i];
        if (abs(d) < N) {
            if (d < 0) na[-d] = true;
            else pa[d] = true;
        }
    }

    for (int i = 0; i < m; i++) {
        int d = sb - b[i];
        if (abs(d) < N) {
            if (d < 0) nb[-d] = true;
            else pb[d] = true;
        }
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (i * j >= N) break;
            if (pa[i] && pb[j]) ppos[i * j] = true;
            if (pa[i] && nb[j]) pneg[i * j] = true;
            if (na[i] && pb[j]) pneg[i * j] = true;
            if (na[i] && nb[j]) ppos[i * j] = true;
        }
    }

    while (q--) {
        int x;
        cin >> x;
        if (x > 0) {
            cout << (ppos[x] ? "YES" : "NO") << endl;
        } else {
            cout << (pneg[-x] ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
