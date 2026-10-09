#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

   
    if (a1 >= m) {
        cout << "0\n";  
        return;
    }

    ll rem = m - a1; 

   
    ll use_k = min(ak, rem / k);
    rem -= use_k * k;

   
    ll fancy_k = rem / k;     
    ll fancy_1 = rem % k;        // Remaining amount covered by fancy 1-burle coins

    cout << fancy_k + fancy_1 << "\n";  // Total fancy coins used
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

