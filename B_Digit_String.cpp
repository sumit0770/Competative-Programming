#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        const int INF = 1e9;

       
        vector<int> dp(4, INF), ndp(4);
        dp[0] = 0;

        for (char c : s) {
            ndp.assign(4, INF);

            for (int st = 0; st < 4; st++) {
                if (dp[st] == INF) continue;

              
                ndp[st] = min(ndp[st], dp[st] + 1);

              
                bool ok = true;
                int ns = st;

                if (c == '4') {
                    ok = false; 
                }
                else if (c == '1') {
                    ns = 1;
                }
                else if (c == '2') {
                    if (st == 1 || st == 3)
                        ok = false; 
                    ns = 2;
                }
                else if (c == '3') {
                    ns = 3;
                }

                if (ok)
                    ndp[ns] = min(ndp[ns], dp[st]);
            }

            dp = ndp;
        }

        cout << *min_element(dp.begin(), dp.end()) << '\n';
    }

    return 0;
}