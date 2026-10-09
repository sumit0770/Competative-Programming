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
    ll n;
    cin >> n;
   
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
       
    }

    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
       
    }

   pair<ll , ll>  ans1 = 1, pair<ll , ll > ans2 = 1; // Initialize with 1 since a single element is a sequence
    ll cnt = 1, cnt1 = 1;  

    // Finding longest consecutive streak in `a`
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            ans1.first  = max(ans1.first, cnt);
            ans1.second = a[i] ;
            cnt = 1;
        }
    }
    ans1 = max(ans1, cnt); // Final update in case the longest streak was at the end

    // Finding longest consecutive streak in `b`
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            cnt1++;
        } else {
            ans2.first  = max(ans2.first , cnt1);
            ans2.second = b[i];
            cnt1 = 1;
        }
    }
    ans2 = max(ans2, cnt1); // Final update

    cout << ans1 << " " << ans2 << endl;
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
