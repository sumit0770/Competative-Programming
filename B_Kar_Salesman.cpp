#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the models in descending order based on the number of cars
        sort(a.rbegin(), a.rend());
        int customers = 0;
        int i = 0;
        
        // Process until all cars are sold
        while (i < n) {
            customers++;
            // Each customer can buy up to x cars from different models
            for (int j = 0; j < x && i < n; ++j, ++i) {
                // No need to do anything here, just move i forward
            }
        }

        cout << customers << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
