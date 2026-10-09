#include <bits/stdc++.h>
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
    ll n, m;
    cin >> n >> m;
    vll a(n), b(n);
    
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    vector<pair<ll, ll> > p(n);
    for (ll i = 0; i < n; i++) {
        p[i] = make_pair(b[i], a[i]); 
    }

    sort(p.begin(), p.end()); 

    ll ans = m, i = 0, j = 1;
    
    while (i < n && p[i].first < m) {  
        ll add = min(n - j, p[i].second);
        ans += add  * p[i].first ;
        j += add;
        i++;  
    }

    if (j < n) { 
        ans += (n - j) * m;
    }

    cout << ans << endl;
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
