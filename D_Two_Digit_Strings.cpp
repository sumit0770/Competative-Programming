#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define all(x) (x).begin(), (x).end()

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

// DSU Class
class DSU {
    vector<int> rank, parent, sz;

public:
    DSU(int n) {
        rank.assign(n + 1, 0);
        parent.resize(n + 1);
        sz.assign(n + 1, 1);

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int findUpar(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v) {
        u = findUpar(u);
        v = findUpar(v);

        if (u == v) return;

        if (rank[u] < rank[v])
            parent[u] = v;
        else if (rank[v] < rank[u])
            parent[v] = u;
        else {
            parent[v] = u;
            rank[u]++;
        }
    }

    void unionBySize(int u, int v) {
        u = findUpar(u);
        v = findUpar(v);

        if (u == v) return;

        if (sz[u] < sz[v]) {
            parent[u] = v;
            sz[v] += sz[u];
        } else {
            parent[v] = u;
            sz[u] += sz[v];
        }
    }
};

void solve() {
    string sa, sb;
    cin >> sa >> sb;

    int n = sa.size();
    int m = sb.size();

    vll pa(n + 1, 0), pe(m + 1, 0);

    for (int i = 0; i < n; i++)
        pa[i + 1] = (pa[i] + (sa[i] - '0')) % 10;

    for (int i = 0; i < m; i++)
        pe[i + 1] = (pe[i] + (sb[i] - '0')) % 10;

    if (pa[n] != pe[m]) {
        cout << -1 << '\n';
        return;
    }

      n++, m++;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (pa[i] == pe[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    cout << dp[0][0] - 1 << '\n';
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