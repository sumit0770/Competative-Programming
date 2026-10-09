#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the cost of a given path
int calculateCost(const vector<vector<int>>& mp, const vector<int>& path) {
    int cost = 0;
    int pathSize = path.size();
    for (int i = 0; i < pathSize - 1; ++i) {
        cost += mp[path[i]][path[i + 1]];
    }
    cost += mp[path[pathSize - 1]][path[0]]; // Return to the starting point
    return cost;
}

// Function to solve TSP using Hamiltonian cycle approach
pair<int, vector<int>> travelingSalesman(const vector<vector<int>>& mp) {
    int n = mp.size();
    vector<int> vertices;

    // Create a list of vertices excluding the starting point (0)
    for (int i = 1; i < n; ++i) {
        vertices.push_back(i);
    }

    int minCost = INT_MAX;
    vector<int> bestPath;

    // Generate all permutations of vertices (all possible Hamiltonian paths)
    do {
        vector<int> path = {0}; // Start from vertex 0
        path.insert(path.end(), vertices.begin(), vertices.end());

        int cost = calculateCost(mp, path);

        // Update minimum cost and best path if current cost is lower
        if (cost < minCost) {
            minCost = cost;
            bestPath = path;
        }
    } while (next_permutation(vertices.begin(), vertices.end()));

    return make_pair(minCost, bestPath);
}

int main() {
    vector<vector<int>> mp = {
        {0, 10, 15, 20, 25},
        {10, 0, 35, 25, 30},
        {15, 35, 0, 30, 5},
        {20, 25, 30, 0, 15},
        {25, 30, 5, 15, 0}
    };

    // Solve TSP
    pair<int, vector<int>> result = travelingSalesman(mp);
    int minCost = result.first;
    vector<int> bestPath = result.second;

    // Print result
    cout << "Minimum Cost: " << minCost <<
