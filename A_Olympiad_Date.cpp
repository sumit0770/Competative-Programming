#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int cnt[6] = {}; 
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        int dig;
        cin >> dig;
        
        if (dig <= 5) cnt[dig]++; 
        
        if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 &&
            cnt[3] >= 1 && cnt[5] >= 1 && !found) {
            cout << i + 1 << endl; // 1-based index
            found = true;
        }
    }
    
    if (!found) cout << 0 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
