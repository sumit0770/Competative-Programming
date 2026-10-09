#include <iostream>
#include <vector>
#include <unordered_map>  // Added unordered_map

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

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
}

void ip(ll &n , vll &a) {
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

void op2(vll &a) {
    for (auto &value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void op(ll &n , vll &a) {
    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    unordered_map<int, int> ma;

    // Read array a and store frequencies in ma
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
    }
    
   
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int ans = 0;

   
    for (int i = 0; i < m; i++) {  
        if (ma[b[i]] > 0) {
            ans += ma[b[i]]; 
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();
    }
}
