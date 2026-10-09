#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;


void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n, k;
        cin >> n >> k;
        vll a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int d = k - 1;
        int even = 0;

      
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                even++;
            }
            if (a[i] % k == 0) {
                d = 0;
            } else {
                d = min((ll)d, k - a[i] % k);
            }
        }

       
        if (k != 4) {
            cout << d << endl;
        } else {
            if (even >= 2) {
                cout << 0 << endl;
            } else if (even == 1) {
                cout << min(1, d) << endl;
            } else {
                cout << min(d, 2) << endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
