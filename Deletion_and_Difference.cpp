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

void ip(ll &n, vll &a) {
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

void op(ll &n, vll &a) {
    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> mp;
    for (auto ch : a) {
        mp[ch]++;
    }
  vll b ;
    int extra = 0;
    int temp = 0;
    int ans = 0;

    for (auto ch : mp) {
       if( ch.second == 1 ){
        b.push_back(ch.first );
    }
        else {
            if( ch.second % 2 == 0 ){
                b.push_back(0) ;
            }
            else{
                b.push_back(ch.first) ;
                b.push_back(0) ;
            }
        }
    }

   // ans += mp.size() - (temp / 2);
    
    sort( b.begin() , b.end()) ;
   // op2(b) ;
    set<int> st ;
    for(auto ch : b){
        st.insert(ch ) ;
    }
    ans = st.size() ;
    cout<<ans<<endl;
    // if ((extra + (temp / 2)) % 2 == 0) {
    //     cout << ans + 1 << endl;
    // } else {
    //     cout << ans + 2 << endl;
    // }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
