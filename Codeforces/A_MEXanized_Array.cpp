#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

       
        if (min(n, x + 1) < k) {
            cout << -1 << endl;
            continue;
        }

        ll sum = 0;

      
        for (int i = 0; i < k; i++) {
            sum += i;
        }

       
        if (k < n) {
            int rem = n - k;
            
            if (x != k) {
                sum += rem * x;
            } else {
                sum += rem * (k - 1);
            }
        }

        cout << sum << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

//Overall Logic:
// - The program calculates a sum based on constraints provided in the problem.
// - The logic inside `solve()`  likely processes the input,
// - calculates the sum, and handles edge cases or constraints.//