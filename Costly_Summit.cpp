#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> selectMaxElements(int x, int n, vector<int>& arr) {
    // Queue to store pairs of (value, original index)
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        q.push({arr[i], i + 1}); // Store value and original index (1-based)
    }

    vector<int> result; // To store the selected indices

    for (int i = 0; i < x; ++i) {
        if (q.empty()) break; // If the queue is empty, stop

        // Dequeue x elements (or all if fewer than x)
        vector<pair<int, int>> temp;
        int count = min(x, (int)q.size());
        for (int j = 0; j < count; ++j) {
            temp.push_back(q.front());
            q.pop();
        }

        // Find the maximum element and its index
        auto maxIt = max_element(temp.begin(), temp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
        int maxIndex = distance(temp.begin(), maxIt);
        result.push_back(temp[maxIndex].second); // Add the original index to the result

        // Remove the maximum element and decrement the remaining elements
        for (int j = 0; j < temp.size(); ++j) {
            if (j != maxIndex) {
                temp[j].first = max(0, temp[j].first - 1); // Decrement but not below 0
                q.push(temp[j]); // Enqueue back
            }
        }
    }

    return result;
}

int main() {
    // Input
    int x = 5;
    int n = 6;
    vector<int> arr = {1, 2, 2, 3, 4, 5};

    // Get the selected indices
    vector<int> result = selectMaxElements(x, n, arr);

    // Output
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}