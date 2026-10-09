#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    ll position = x, count_zero = 0, net_displacement = 0;

    
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'R') position++;
        else position--;

        if (position == 0) count_zero++; // Count resets
    }

    net_displacement = position - x; // Net movement after one full sequence

    // Step 2: If net displacement is 0, check if `0` is reached in cycles
    if (position == 0) {
        cout << k << endl; // If it directly reaches 0 at the end of a cycle, it resets `k` times
        return;
    }

    // Step 3: Compute how many full cycles fit in `k`
    ll additional_cycles = (k - n) / n; // Full sequences we can perform
    ll remaining_steps = (k - n) % n;   // Remaining steps after full cycles

    position = x; // Reset position
    for (ll i = 0; i < remaining_steps; i++) {
        if (s[i] == 'R') position++;
        else position--;

        if (position == 0) count_zero++;
    }

    // Multiply reset counts by additional cycles
    count_zero += additional_cycles * count_zero;

    cout << count_zero << endl;
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
