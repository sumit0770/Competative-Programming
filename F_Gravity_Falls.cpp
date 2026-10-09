#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> arrays(n);

    // Read the arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j];
        }
    }

    // Determine the maximum width of the grid
    int maxWidth = 0;
    for (const auto& arr : arrays) {
        maxWidth = max(maxWidth, (int)arr.size());
    }

    // Collect all elements column-wise
    vector<vector<int>> columns(maxWidth);
    for (const auto& arr : arrays) {
        for (int j = 0; j < arr.size(); j++) {
            columns[j].push_back(arr[j]);
        }
    }

    // Sort each column
    for (auto& col : columns) {
        sort(col.begin(), col.end());
    }

  
    vector<int> bottomRow;
    for (const auto& col : columns) {
        if (!col.empty()) {
            bottomRow.push_back(col[0]);
        }
    }


    for (int x : bottomRow) {
        cout << x << " ";
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
