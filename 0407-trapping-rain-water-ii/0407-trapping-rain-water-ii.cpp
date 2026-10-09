class Solution {
public:
    int trapRainWater(vector<vector<int>>& h) {

        int n = h.size();
        int m = h[0].size();

        if (n <= 2 || m <= 2)
            return 0;

       
        priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        // Add boundary cells
        for (int i = 0; i < n; i++) {
            pq.push({h[i][0], i, 0});
            pq.push({h[i][m - 1], i, m - 1});

            vis[i][0] = true;
            vis[i][m - 1] = true;
        }

        for (int j = 0; j < m; j++) {
            pq.push({h[0][j], 0, j});
            pq.push({h[n - 1][j], n - 1, j});

            vis[0][j] = true;
            vis[n - 1][j] = true;
        }

        int dx[] = {0, 0, -1, 1};
        int dy[] = {-1, 1, 0, 0};

        int ans = 0;

        while (!pq.empty()) {

            auto [height, r, c] = pq.top();
            pq.pop();

            for (int k = 0; k < 4; k++) {

                int nr = r + dx[k];
                int nc = c + dy[k];

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    !vis[nr][nc]) {

                    vis[nr][nc] = true;

                   
                    ans += max(0, height - h[nr][nc]);

                   
                    pq.push({
                        max(height, h[nr][nc]),
                        nr,
                        nc
                    });
                }
            }
        }

        return ans;
    }
};