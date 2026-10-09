#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check lexicographic conditions
bool isValid(string &s, string &b) {
    return (b > s && string(b.rbegin(), b.rend()) > s);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Edge case: If all 'z', no valid answer
    if (s == string(n, 'z')) {
        cout << -1 << endl;
        return;
    }

    string a = s;

    // Brute-force: Try every possible lexicographically larger string
    for (int i = 0; i < n; i++) {
        for (char ch = a[i] + 1; ch <= 'z'; ch++) { 
            string temp = a;
            temp[i] = ch; // Modify one character

            if (isValid(s, temp)) { // Check lexicographic condition
                cout << temp << endl;
                return;
            }
        }
    }

    cout << -1 << endl; // No valid string found
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
