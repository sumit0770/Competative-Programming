#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<string> vs;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<string> a(n), b(n);  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

   
    for (int i = 0; i < n; i++) {
        int diff = 0;
        for (int j = 0; j < m; j++) {
            diff += (a[i][j] - b[i][j]);  
        }
        if (diff % 3 != 0) {
            no;
            return;
        }
    }

   
    for (int j = 0; j < m; j++) {
        int diff = 0;
        for (int i = 0; i < n; i++) {
            diff += (a[i][j] - b[i][j]);
        }
        if (diff % 3 != 0) {
            no;
            return;
        }
    }

    yes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;
    while (testcases--) {
        solve();
    }
    return 0;
}
