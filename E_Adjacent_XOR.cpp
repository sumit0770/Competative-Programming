#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n;
    cin >> n;
    vll a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

   
    if (a[n-1] != b[n-1]) {
        cout << "NO\n";
        return;
    }


    for (int i = n - 2; i >= 0; i--) {
        if (b[i] != a[i] &&
            b[i] != (a[i] ^ a[i+1]) &&
            b[i] != (a[i] ^ b[i+1])) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
