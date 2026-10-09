#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main() {
    int t;
    cin >> t;

    while (t--) {
     ll x, y;
        cin >> x >> y;

        cout << (y*1LL > 2* 1LL * x ? "YES" : "NO") << endl;
    }

    return 0;
}