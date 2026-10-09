#include <iostream>
using namespace std;
typedef long long ll;

ll countDivisible(ll L, ll R, ll x) {
    return R / x - (L - 1) / x;
}

ll countBad(ll L, ll R) {
    ll bad = 0, primes[] = {2, 3, 5, 7};
    for (int mask = 1; mask < (1 << 4); mask++) {
        ll lcm = 1, bits = 0;
        for (int i = 0; i < 4; i++) 
            if (mask & (1 << i)) lcm *= primes[i], bits++;
        bad += (bits % 2 ? 1 : -1) * countDivisible(L, R, lcm);
    }
    return bad;
}

ll countRemaining(ll L, ll R) {
    return (R - L + 1) - countBad(L, R);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll L, R;
        cin >> L >> R;
        cout << countRemaining(L, R) << '\n';
    }
    return 0;
}
