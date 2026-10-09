#include <bits/stdc++.h>
using namespace std;


#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

long long number(int N, const vll& A) {
   
    set<ll> unique_values(A.begin(), A.end());
    vector<ll> b(unique_values.begin(), unique_values.end());
    
    long long count = 0;

    
    for (size_t i = 0; i < b.size(); ++i) {
        for (size_t j = i + 1; j < b.size(); ++j) {
            ll low = abs(b[i] - b[j]) + 1;
            ll high = b[i] + b[j] - 1;

            if (high >= low) {
                count += (high - low + 1);
            }
        }
    }
    
    return count;
}

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n;
        cin >> n;
        vll a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long asn = number(n, a);
        cout << asn << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
