#include <iostream>
#include <vector>
#include <cmath>    
#include <ios>     
#include <iomanip>
using namespace std;

typedef long long ll;
const int MAX = 1e6 + 1;
int is_prime[MAX];

void sieve() {
    is_prime[0] = is_prime[1] = 1; 
    for (int i = 2; i * i < MAX; i++) {
        if (!is_prime[i]) {
            for (int j = i  * i; j < MAX; j += i) {
                is_prime[j] = 1; 
            }
        }
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if (n == 1) {
            cout << "NO\n";
            continue;
        }

        ll temp = sqrt(n);
        if (temp * temp == n && !is_prime[temp]) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();  
    solve();
    return 0;
}
