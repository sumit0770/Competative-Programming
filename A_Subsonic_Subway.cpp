#include <bits/stdc++.h>
using namespace std;

bool isValidSpeed(double speed, int N, vector<pair<int, int> >& windows) {
    for (int i = 1; i <= N; i++) {
        double min_time = (double)i / speed;
        if (min_time < windows[i - 1].first || min_time > windows[i - 1].second) {
            return false;
        }
    }
    return true;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector< pair < int, int > > windows(N);

        for (int i = 0; i < N; i++) {
            int Ai, Bi;
            cin >> Ai >> Bi;
            windows[i].first= Ai;
            windows[i].second= Bi;

        }

        double low = 0, high = 1e6;
        double ans = -1;

        while (high - low > 1e-7) {
            double mid = (low + high) / 2;

            if (isValidSpeed(mid, N, windows)) {
                ans = mid;
                high = mid;
            } else {
                low = mid;
            }
        }

        if (ans == -1) {
            cout << -1 << endl;
        } else {
            cout << fixed << setprecision(6) << ans << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
