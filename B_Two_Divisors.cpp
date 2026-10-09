#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll a, b;
        cin >> a >> b;
        
        ll x = b; // The maximum divisor will be b * (some k)
        for (ll i = 1; i * i <= b; i++) {
            if (b % i == 0) {
                // Check both divisors i and b/i
                if (i > a) {
                    x = max(x, b * (i));
                }
                if ((b / i) > a) {
                    x = max(x, b * (b / i));
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}
