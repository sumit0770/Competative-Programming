#include <bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    if (points.empty()) return 0;
    sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });
    int arrows = 1;            
    long long arrowPos = points[0][1];

    for (int i = 1; i < points.size(); i++) {
      
        if (points[i][0] > arrowPos) {
            arrows++;
            arrowPos = points[i][1];
        }
    }
    return arrows;
}

int main() {
    // Example 1
    vector<vector<int>> points1 = {{10,16},{2,8},{1,6},{7,12}};
    cout << "Example 1 Output: " << findMinArrowShots(points1) << endl; 
    // Example 2
    vector<vector<int>> points2 = {{1,2},{3,4},{5,6},{7,8}};
    cout << "Example 2 Output: " << findMinArrowShots(points2) << endl; 
    // Example 3
    vector<vector<int>> points3 = {{1,2},{2,3},{3,4},{4,5}};
    cout << "Example 3 Output: " << findMinArrowShots(points3) << endl; 
    return 0;
}
