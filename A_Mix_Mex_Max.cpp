#include <iostream>
#include <vector>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n;
    cin >> n;
    vll a;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x != -1) a.push_back(x); 
    }

   
    if (a.empty()) {
       yes ;
        return;
    }

    ll a1 = *max_element(a.begin(), a.end());
    ll a2 = *min_element(a.begin(), a.end());

    if (a1 == a2 && a2 != 0) {
        yes;
    } else {
        no;
    }
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
