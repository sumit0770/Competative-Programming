#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> c[i];

        vector<int> first(k + 1, -1);
        vector<int> last(k + 1, -1);
        vector<vector<int> > pos(k + 1);

        for (int i = 1; i <= n; ++i) {
            pos[c[i]].push_back(i);
        }

        int ans = INF;

        for (int color = 1; color <= k; ++color) {
            if (pos[color].empty()) continue;

            vector<int> gaps;
            // Gap before the first occurrence
            gaps.push_back(pos[color][0] - 1);

            // Gaps between consecutive same-color planks
            for (int i = 1; i < pos[color].size(); ++i) {
                gaps.push_back(pos[color][i] - pos[color][i - 1] - 1);
            }

            // Gap after the last occurrence
            gaps.push_back(n - pos[color].back());

            // Now apply your logic: sort and halve the biggest
            sort(gaps.begin(), gaps.end());
            // Repaint: halve the biggest gap
            gaps.back() /= 2;

            // New max gap after repaint
            int max_gap = *max_element(gaps.begin(), gaps.end());
            ans = min(ans, max_gap);
        }

        cout << ans << '\n';
    }

    return 0;
}
