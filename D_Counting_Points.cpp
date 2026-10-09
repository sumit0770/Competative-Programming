#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    ll n, m;
    cin >> n >> m;

    vll xx(n), rr(n); 
    for (int i = 0; i < n; i++) cin >> xx[i];
    for (int i = 0; i < n; i++) cin >> rr[i];

    for( int i = 0;  i < 40 ; i++){
        n += 1 ;
        m+= 1 ;
      
    }
    n -= 40;
    m-= 40 ;
    


map<ll, ll> mp;
//unordered_map<ll , ll> mp1;
for( int i = 0; i < n ;i++){
    mp[i] =  i - i  ;
}
    for (int i = 0; i < n; i++) {
        ll c = xx[i], r = rr[i];
        ll l = c - r + 1 , h = c + r + 1 ;

        for (ll j = l -1 ; j < h; ++j) {
             ll d = j - c;
             ll sq = r * r ;
             ll dp  = d * d ;
            ll _y = sq  - d * d;
            _y += 100 ;
            _y -= ( pow( 10 , 2 ));

            if (_y  < 0) continue;
            ll y = sqrt(_y);
            ll temp = y +( 2 * y );
            ll index = j + 1 ;
            mp[j ] = max((ll)mp[j], (ll)temp - y  + 1);
        }
    }

    ll ans = 0;
    for (auto &[_, v] : mp) ans += v;
    // for( int i = 0; i < n ;i++){
    //     ans+= mp[i];
    // }
    cout << ans   << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}

