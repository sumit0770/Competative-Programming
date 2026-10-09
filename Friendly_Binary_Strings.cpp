#include <bits/stdc++.h>
using namespace std;
 
// Hopcroft-Karp algorithm implementation for bipartite matching.
struct HopcroftKarp {
    int nU, nV; // number of vertices on U (even cells) and V (odd cells)
    vector<vector<int>> adj; // for each vertex in U, list of adjacent vertices in V
    vector<int> pairU; // pair for U vertices (index in V) or -1 if unmatched
    vector<int> pairV; // pair for V vertices (index in U) or -1 if unmatched
    vector<int> dist;  // distances for BFS in U side
 
    HopcroftKarp(int nU, int nV) : nU(nU), nV(nV) {
        adj.resize(nU);
        pairU.assign(nU, -1);
        pairV.assign(nV, -1);
        dist.assign(nU, 0);
    }
 
    bool bfs() {
        queue<int> q;
        const int INF = INT_MAX;
        // All free vertices in U are at distance 0.
        for (int u = 0; u < nU; u++) {
            if (pairU[u] == -1) {
                dist[u] = 0;
                q.push(u);
            } else {
                dist[u] = INF;
            }
        }
 
        int distance = INF;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            if (dist[u] < distance) {
                for (int v : adj[u]) {
                    int pu = pairV[v];
                    if (pu == -1) {
                        distance = dist[u] + 1;
                    } else if (dist[pu] == INF) {
                        dist[pu] = dist[u] + 1;
                        q.push(pu);
                    }
                }
            }
        }
        return distance != INF;
    }
 
    bool dfs(int u, int distance) {
        if (dist[u] == distance) {
            dist[u] = INT_MAX; // mark as visited
            for (int v : adj[u]) {
                int pu = pairV[v];
                if (pu == -1 || (dist[pu] == distance + 1 && dfs(pu, distance + 1))) {
                    pairU[u] = v;
                    pairV[v] = u;
                    return true;
                }
            }
        }
        return false;
    }
 
    int maxMatching() {
        int matching = 0;
        while (bfs()) {
            for (int u = 0; u < nU; u++) {
                if (pairU[u] == -1) {
                    if (dfs(u, 0))
                        matching++;
                }
            }
        }
        return matching;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int M, N;
    cin >> M >> N;
    // There are N rows each of length M.
    vector<string> grid(N);
    for (int i = 0; i < N; i++){
        cin >> grid[i];
    }
 
    // Partition the grid cells into two sets (even and odd) by (i+j) % 2.
    vector<vector<int>> evenId(N, vector<int>(M, -1));
    vector<vector<int>> oddId(N, vector<int>(M, -1));
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if ((i+j) % 2 == 0) {
                evenId[i][j] = evenCount++;
            } else {
                oddId[i][j] = oddCount++;
            }
        }
    }
 
    // Build the bipartite graph: for each even cell, check its 4 neighbors.
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    HopcroftKarp hk(evenCount, oddCount);
 
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if ((i+j) % 2 == 0) { // even cell
                int u = evenId[i][j];
                for (int d = 0; d < 4; d++){
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni < 0 || ni >= N || nj < 0 || nj >= M)
                        continue;
                    // Because the grid is bipartite, the neighbor will be odd.
                    if (grid[i][j] == grid[ni][nj]){
                        int v = oddId[ni][nj];
                        if (v >= 0)
                            hk.adj[u].push_back(v);
                    }
                }
            }
        }
    }
 
    // The minimum number of replants equals the size of the maximum matching.
    int ans = hk.maxMatching();
    cout << ans << "\n";
    return 0;
} 