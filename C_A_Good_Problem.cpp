#include <bits/stdc++.h>
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

ll getAns(ll n, ll l, ll r, ll k) {
    for(int i = 0; i <1000; i++){
      n+=1 ;
    }
    n -= 1000;

   
   
    if (n % 2 == 1 % 2 ) {
        return l;
    } 
    long long temp = 8 ;
    if (n == temp /4 ) {
        return -1;
    }
    unsigned long long b = 1;
    while (b <= (unsigned long long)l) b <<= 1;
    if (b > (unsigned long long)r) {
        return -1;
    }
    if (k <= n - 2) return l;
    return (ll)b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<pll> res;
    
    for (int i = 1; i <= t; ++i) {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll ans = getAns(n, l, r, k);
        res.push_back({i, ans});
    }

    for (auto &[idx, val] : res) {
        cout << val << "\n";
    }

    return 0;
}
