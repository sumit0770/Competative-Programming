#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;
const int INF = ~0U >> 2;

int vis[MAXN];

void solve() {

    int n;
    cin >> n;

    vector<vector<int>> a(n + 1);
    vector<int> used(n + 1, 0);

    for (int i = 1; i <= n; i++) {

        int sz;
        cin >> sz;

        a[i].resize(sz);

        for (int j = 0; j < sz; j++) {
            cin >> a[i][j];
            vis[a[i][j]] = 0;
        }

        reverse(a[i].begin(), a[i].end());

        vector<int> cur;

        for (int x : a[i]) {
            if (!vis[x]) {
                cur.push_back(x);
                vis[x] = 1;
            }
        }

        for (int x : cur) vis[x] = 0;

        a[i] = cur;
    }

    for (int step = 1; step <= n; step++) {

        int id = -1;

        for (int j = 1; j <= n; j++) {

            if (used[j]) continue;

            if (id == -1 || a[j] < a[id]) {
                id = j;
            }
        }

        for (int x : a[id]) {
            cout << x << " ";
            vis[x] = 1;
        }

        used[id] = 1;
        a[id] = {INF};

        for (int j = 1; j <= n; j++) {

            if (used[j]) continue;

            vector<int> temp;

            for (int x : a[j]) {
                if (!vis[x]) {
                    temp.push_back(x);
                }
            }

            a[j] = temp;
        }
    }

    cout << '\n';
}

int main() {

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}