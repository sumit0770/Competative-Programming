#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MAX = 2e5 + 7; 

vll a(MAX, 0);
vll prefix(MAX, 0);

ll fun(ll l) {
    ll cnt = 0;
    while (l > 0) {
        l /= 3;
        cnt++;
    }
    return cnt;
}


void preprocess() {
    for (ll i = 1; i < MAX; i++) {
        a[i] = fun(i);
        prefix[i] = prefix[i - 1] + a[i];
    }
}

void solve() {
    ll l, r;
    cin >> l >> r;
    cout << prefix[r] - prefix[l - 1]  + a[l]<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    preprocess(); 

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
