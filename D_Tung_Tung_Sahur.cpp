#include <bits/stdc++.h>
using namespace std;

vector<pair<char, int> > compress(const string &str) {
    vector<pair<char, int> > result;
    int n = str.size();
    int i = 0;
    while (i < n) {
        char ch = str[i];
        int count = 0;
        while (i < n && str[i] == ch) {
            count++;
            i++;
        }
        result.push_back(make_pair(ch, count));
    }
    return result;
}

void solve() {
    string p, s;
    cin >> p >> s;

    auto a = compress(p);
    auto b = compress(s);
    

    if (a.size() != b.size()) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i].first != b[i].first || b[i].second < a[i].second || b[i].second > 2 * a[i].second) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
