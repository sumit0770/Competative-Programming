#include <iostream>
#include <vector>

using namespace std;

vector<int> ip(const vector<int>& p) {
    int n = p.size();
    vector<int> inv(n);
    for (int i = 0; i < n; i++) {
        inv[p[i] - 1] = i + 1;
    }
    return inv;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> inv = ip(p);

    for (int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }
    cout << endl;

    return 0;
}