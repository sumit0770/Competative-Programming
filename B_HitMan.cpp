#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll nCr(int n, int r) {
    if (r > n) return 0;      
    if (r == 0 || r == n) return 1;

    ll result = 1;
    if (r > n - r) r = n - r;

    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

const int mod = 1e9 + 7;

void solve() {
    ll h, r;  
    cin >> h >> r;

    ll sb = nCr(h - 1, r - 1 );      
    ll ans  = (r ) * sb; 
    if( r == 1 ) cout<<h + 1 <<endl;
else
   { cout << ans % mod << endl;}
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
