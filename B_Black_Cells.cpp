#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    for (ll &x : a) cin >> x;

    ll ans = 1e18;

    
    auto upd = [&](vll b) {
        sort(b.begin(), b.end());

        if (b.size() % 2 != 0) return; 
        for (int i = 1; i < b.size(); ++i) {
            if (b[i - 1] == b[i]) return; 
        }

        ll res = 0;
        for (int i = 0; i < b.size(); i += 2) {
            res = max(res, b[i + 1] - b[i]);
        }
        ans = min(ans, res);
    };
    if( n % 2 == 0 ){
      upd(a) ;
      cout<<ans<<endl;
      return ;
    }
    else
    {for (int i = 0; i < n; ++i) {
        for (int x : {-1, 1}) {
            a.push_back(a[i] + x);
            upd(a);
            a.pop_back();
        }
    }

    cout << ans << '\n';}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
