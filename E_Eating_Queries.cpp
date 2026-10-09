#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if it's possible to split the string into K parts with min(f(Ti)) >= x
bool canSplit(const string &s, int n, int k, int x) {
    int count = 0, current_length = 0;
    for (char c : s) {
        current_length++;
        if (current_length >= x) {
            count++;
            current_length = 0; // Reset for the next substring
        }
    }
    return count >= k;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // Binary search on the answer
        int low = 1, high = n, result = 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canSplit(s, n, k, mid)) {
                result = mid; // Update the result
                low = mid + 1; // Try for a larger minimum value
            } else {
                high = mid - 1; // Try for a smaller minimum value
            }
        }

        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
