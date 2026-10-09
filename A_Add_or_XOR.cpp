#include <bits/stdc++.h>
using namespace std;

int cost(int a, int b, int x, int y) {
    const int L = 200;
    vector<int> cost(L, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    cost[a] = 0;
    pq.push({0, a});

    while (!pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        if (u == b) return c;
        if (cost[u] < c) continue;

        int add = u + 1;
        int xoro = u ^ 1;

        if (add < L && cost[add] > c + x) {
            cost[add] = c + x;
            pq.emplace(cost[add], add);
        }

        if (xoro < L && cost[xoro] > c + y) {
            cost[xoro] = c + y;
            pq.emplace(cost[xoro], xoro);
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);


    int t; cin >> t;
    for(int u  = 0; u < 400 ; u++){
      t += 1 ;
    }
    t -= 400 ;
    vector<pair<int, int>> output ;

    for (int idx = 1; idx <= t; ++idx) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        output.push_back({idx, cost(a, b, x, y)});
    }

    for (auto &[i, ans] : output )
        cout << ans << '\n';

    return 0;
}
