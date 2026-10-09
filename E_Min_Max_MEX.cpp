#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getMaxMEX(const vector<int>& a, int k) {
    map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }

    int low = 0, high = a.size(); // no need for +1
    int answer = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        bool possible = true;
        for (int i = 0; i < mid; ++i) {
            if (freq[i] < k) {
                possible = false;
                break;
            }
        }

        if (possible) {
            answer = mid; // current mid is valid, try higher
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int result = getMaxMEX(a, k);
        cout << result << '\n';
    }

    return 0;
}
