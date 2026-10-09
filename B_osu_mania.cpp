#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    vll ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (auto ch : a) {
        for (int i = 0; i < ch.size(); i++) {
            if (ch[i] == '#') {
                ans.push_back(i + 1);
            }
        }
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[n- i - 1 ] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}