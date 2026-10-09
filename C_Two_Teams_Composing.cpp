#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }

    int max_freq = 0; 
    for (auto &[num, count] : freq) {
        max_freq = max(max_freq, count);
    }

    int distinct_count = freq.size(); 

  
    int max_team_size = max(min(max_freq, distinct_count - 1), min(max_freq - 1, distinct_count));

    cout << max_team_size << endl;
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
