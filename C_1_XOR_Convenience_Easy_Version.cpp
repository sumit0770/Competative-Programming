#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

const int inf = 1e9;
const int mod = 998244353;

void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " ";
        for (int i = 2; i <= n-2; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << 1;
    }else {
        cout << n - 1 << " ";
        for (int i = 2; i <= n-3; i += 2) {
            cout << i+1 << " " << i << " ";
        }
        cout << n << " " << 1;
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
}