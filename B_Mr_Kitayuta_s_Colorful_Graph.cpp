#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int N = 100 + 2;
const int M = 100 + 2;
vector<int> adj[N][M];
vector<bool> vis(N);

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

void dfs(int v, int c) {
    vis[v] = true;
    for (auto u : adj[v][c]) {
        if (!vis[u]) {
            dfs(u, c);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            adj[i][j].clear();
        }
    }

    for (int i = 0; i < m; i++) { 
        int u, v, c;
        cin >> u >> v >> c;
        adj[u][c].push_back(v);
        adj[v][c].push_back(u);
    }

    int q; 
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;

        int counter = 0;
        for (int c = 1; c <= m; c++) {
            fill(vis.begin(), vis.end(), false); 
            dfs(u, c); 
            if (vis[v]) { 
                counter++;
            }
        }
        cout << counter << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }
}