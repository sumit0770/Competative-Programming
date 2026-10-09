#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

// DSU Class for Union-Find
class DSU {
    vector<int> rank, parent, size;

public:
    DSU(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUpar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulu = findUpar(u);
        int ulv = findUpar(v);

        if (ulu == ulv)
            return;

        if (rank[ulu] < rank[ulv]) {
            parent[ulu] = ulv;
        }
        else if (rank[ulv] < rank[ulu]) {
            parent[ulv] = ulu;
        }
        else {
            parent[ulv] = ulu;
            rank[ulu]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulu = findUpar(u);
        int ulv = findUpar(v);

        if (ulu == ulv) return;

        if (size[ulu] < size[ulv]) {
            parent[ulu] = ulv;
            size[ulv] += size[ulu];
        }
        else {
            parent[ulv] = ulu;
            size[ulu] += size[ulv];
        }
    }
};

void solve() {

    int n, m;
    cin >> n;

    
    vll dep(n + 1, 0);

  
    vll p(n + 1, -1);

    bool root = false;

    for (int v = 2; v <= n; v++) {
        cin >> p[v];

        dep[v] = dep[p[v]] + 1;

        if (p[v] == 1)
            root = true;
    }

    cin >> m;

    if (m == 0) {
        cout << 0 << endl;
        return;
    }

    vll pm(m);

    bool flg = false;

    for (int v = 0; v < m; v++) {
        cin >> pm[v];

        if (pm[v] == 1)
            flg = true;
    }

    int node = -1;

    
    if (flg) {
        node = 1;
    }
    else {
        int mini = 1e9;
        int cl = -1;

        for (auto v : pm) {
            if (mini > dep[v]) {
                mini = dep[v];
                cl = v;
            }
        }

        node = cl;
    }

    cout << m - 1 << " ";

    for (auto it : pm) {
        if (it != node) {
            cout << it << " ";
        }
    }

    cout << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}