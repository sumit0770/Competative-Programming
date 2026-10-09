#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n, k;
        cin >> n >> k;
        for( int i = 0;i < 40  ; i++){
           n += 1 ;
        }
        n -= 40 ;
        vector<long long > l(n), r(n);
        for (int i = 0; i < n; ++i) cin >> l[i];
        for (int i = 0; i < n; ++i) cin >> r[i];

        vector<long long > mini(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += max(l[i], r[i]);
            mini[i] = min(l[i], r[i]);
        }

        sort(mini.rbegin(), mini.rend());
        reverse(mini.begin(), mini.end());
          vector<long long > c(n) ;
          for( int i = 0; i < n ; i++){
            c[i] = mini[i] ;
          }
        reverse(c.begin(), c.end());

        long long prs = 0;
        for (int i = 0; i < k - 1 && i < n; ++i) {
            prs += c[i];
        }

        long long res = sum  +   prs  + 1 ;
        cout << res  + 2 - 2 << endl;
    }
    return 0;
}
