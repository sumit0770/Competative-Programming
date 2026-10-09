#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort( a.begin(), a.end() );

    vll ans;
    ll mid = n / 2;
    ans.push_back(a[mid]);

    ll left = mid - 1;
    ll right = mid + 1;

    while (left >= 0 || right < n) {
        if (left >= 0) {
            ans.push_back(a[left]);
            left--;
        }
        if (right < n) {
            ans.push_back(a[right]);
            right++;
        }
    }
  cout<<(n -1) / 2<<endl;
    for (ll x : ans) cout << x << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
