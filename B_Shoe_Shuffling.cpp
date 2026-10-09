#include <vector>       // For using the vector container
#include <algorithm>    // For algorithms like sort, find, etc.
#include <numeric>      // For numeric operations like accumulate, gcd, lcm
#include <set>          // For using the set container
#include <map>          // For using the map container
#include <unordered_map>// For using the unordered_map container
#include <queue>        // For using the queue container
#include <stack>        // For using the stack container
#include <deque>        // For using the deque container
#include <string>       // For using the string class
#include <cstring>      // For C-style string functions
#include <cmath>        // For mathematical functions like sqrt, pow, etc.
#include <climits>      // For limits of integral types
#include <cfloat>       // For limits of floating-point types
#include <cassert>      // For using the assert macro
#include <iomanip>

using namespace std;

#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    map<int, vi> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    for (auto &ch : mp) {
        if (ch.second.size() < 2) {
            cout << -1 << endl;
            return;
        }
    }

    vi res(n);
    for (auto &ch : mp) {
        vi &indices = ch.second;
        for (int i = 0; i < indices.size(); i++) {
            res[indices[i]] = indices[(i + 1) % indices.size()] + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
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