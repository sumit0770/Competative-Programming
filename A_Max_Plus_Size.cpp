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
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n;
        cin >> n;
        vll a, b;
        for (int i = 0; i < n; i++) {
            int x;
           cin >> x;
            if (i % 2 == 0) a.push_back(x); 
            else b.push_back(x);  
        }

        if (a.empty()) a.push_back(0);
        if (b.empty()) b.push_back(0);

        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        
        int result = max(b[0] + (int)b.size(), a[0] + (int)a.size());
        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
