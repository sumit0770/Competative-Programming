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

ll subk(vll &a, ll k) {
    ll n = a.size();
    int l = 0, r = 0;
    ll sum = 0, count_subarrays = 0;

    while (r < n) {
        sum += a[r];
        while (sum > k && l <= r) {
            sum -= a[l];
            l++;
        }
        if (sum == k) {
            count_subarrays++;
        }
        r++;
    }
    return count_subarrays;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vll a(n), b(m), prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vll temp(n, 0);  
    ll maxi = a[0];  
    temp[0] = maxi;
    
    for (int i = 1; i < n; i++) {
        maxi = max(maxi, a[i]);
        temp[i] = maxi;
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    
   for (auto ch : b) {
    auto index = upper_bound(temp.begin(), temp.end(), ch) - temp.begin() - 1;

    if (index < 0) { 
        cout << 0 << " ";
    } else {
        cout << prefix[index] << " "; 
    }
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
}
