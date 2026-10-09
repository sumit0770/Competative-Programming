#include <bits/stdc++.h>
using namespace std;

vector<int> seq(vector<int>& arr) {
    int n = arr.size();
    vector<int> sub, subIndex, parent(n, -1);
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        auto it = lower_bound(sub.begin(), sub.end(), num);
        int idx = it - sub.begin();

        if (it == sub.end()) {
            sub.push_back(num);
            subIndex.push_back(i);
        } else {
            *it = num;
            subIndex[idx] = i;
        }

        if (idx > 0)
            parent[i] = subIndex[idx - 1];
    }
    vector<int> lis;
    int k = subIndex.back();
    while (k != -1) {
        lis.push_back(arr[k]);
        k = parent[k];
    }
    reverse(lis.begin(), lis.end());

    return lis;
}

int main() {
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60};
    vector<int> lis = seq(arr);

    cout << "Length of LIS: " << lis.size() << endl;
    cout << "LIS: ";
    for (int x : lis) cout << x << " ";
    cout << endl;

    return 0;
}
