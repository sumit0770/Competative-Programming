class Solution {
    long long ans = 0;

    pair<long long, long long> dfs(
        int node,
        int parent,
        vector<vector<int>>& adj,
        vector<int>& price
    ) {
        long long withLeaf = price[node];
        long long withoutLeaf = 0;

        for (int child : adj[node]) {
            if (child == parent)
                continue;

            auto [childWithLeaf, childWithoutLeaf] =
                dfs(child, node, adj, price);

            
            ans = max(ans, withLeaf + childWithoutLeaf);
            ans = max(ans, withoutLeaf + childWithLeaf);

          
            withLeaf = max(
                withLeaf,
                price[node] + childWithLeaf
            );

            withoutLeaf = max(
                withoutLeaf,
                price[node] + childWithoutLeaf
            );
        }

        return {withLeaf, withoutLeaf};
    }

public:
    long long maxOutput(
        int n,
        vector<vector<int>>& edges,
        vector<int>& price
    ) {
        vector<vector<int>> adj(n);

        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(0, -1, adj, price);

        return ans;
    }
};