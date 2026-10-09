#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int mini = INT_MAX; 
        int mnn = INT_MAX;  

        for (int i = 0; i < n; i++) {
            if (a[i] > mini && a[i] < mnn) {
                ans++;
                mnn = a[i];
            }
            mini = min(mini, a[i]);
        }

        cout << ans << endl; 
    }
    return 0;
}
