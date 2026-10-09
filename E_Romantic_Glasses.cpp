#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
 

void solve() {
int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    map<ll ,  ll > m;
    ll s = 0;
    m[0] = 1;
    for(int i = 0; i < n; ++i) {
       if( i % 2== 0 )
        s += a[i];
     else 
      s-= a[i] ;
        if(m[s]) {
            cout << "YES\n";
            return;
        }
        ++m[s];
    }
    cout << "NO\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}