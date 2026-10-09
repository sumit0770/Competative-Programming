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
    ll n, k;
    cin >> n >> k;
    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (k == 1) {
        ll l = *max_element(a.begin(), a.end() - 1);    
        ll r = *max_element(a.begin() + 1, a.end());      
        ll ans = max(l + a.back(), r + a[0]);
        cout << ans << endl;
        return;
    }

   
    sort(a.begin(), a.end(), greater<ll>()); 
    ll ans = accumulate(a.begin(), a.begin() + k + 1, 0LL); 
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
