#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAX = 1e6 + 10;
bool is_prime[MAX];
vector<int> primes;

void sieve() {
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAX; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}

void ans() {
    int n, k;
    cin >> n >> k;

    int cnt = 0;
    for (size_t i = 1; i < primes.size(); i++) {
        int x = primes[i] + primes[i - 1] + 1;
        if (x <= n && is_prime[x]) cnt++;
    }

    if (cnt >= k) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 
    ans();
    return 0;
}
