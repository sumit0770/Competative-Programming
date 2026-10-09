#include <iostream>
#include <vector>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int temp = x % k;
        a[i] = min(temp, k - temp);
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int temp = x % k;
        b[i] = min(temp, k - temp);
    }
    sort(begin(a), end(a));
    sort(begin(b) , end(b)) ;

    if (a == b) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
