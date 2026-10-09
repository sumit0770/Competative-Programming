#include <bits/stdc++.h>
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

void solve() {
    int n, k, d;
    cin >> n >> k >> d;

    queue<int> q;
    vector<int> dist(n + 1, -1);
    
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        if (dist[x] == -1) {
            dist[x] = 0;
            q.push(x);
        }
    }

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

  
    vector<int> used(n, -1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int idx = edge.second;

            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                used[idx] = 1; 
                q.push(v);
            }
        }
    }

    vector<int> ans;

    for (int i = 1; i <= n - 1; i++) {
        if (used[i] == -1) ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (auto &x : ans) cout << x << " "; 
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}