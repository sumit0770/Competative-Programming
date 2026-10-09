#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canSplit(const string &s, int k, int m) {
    int ze = 0, ones = 0, maxi = 0, check = 0;

    for (char c : s) {
        if (c == '0') ze++;
        else ones++;

        maxi = max(maxi, ze - ones);

        if (ones + maxi >= m) {
            check++;
            ze = 0;
            ones = 0;
            maxi = 0;
        }
    }
    return check >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<pair<int, int>> res; 

    for (int t = 1; t <= T; t++) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int low = 1, high = n, ans = 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canSplit(s, k, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        res.emplace_back(t, ans); 
    }


    for (const auto &res : res) {
        cout << res.second << endl;
    }

    return 0;
}

