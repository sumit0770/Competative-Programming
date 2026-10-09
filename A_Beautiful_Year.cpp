#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int  x) {
    string temp = to_string(x);
    set<char> digitSet(temp.begin(), temp.end());  
    return digitSet.size() == temp.size(); 
}

void solve() {
    int x;
    cin >> x;

    while (true) {
        x++; 
        if (hasDistinctDigits(x)) {
            cout << x << endl;
            return; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
