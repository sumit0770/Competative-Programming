#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vll a(26, 0); // Initialize frequency array for 26 letters
        for (int i = 0; i < n; i++) {
            a[s[i] - 'a']++;
        }

        int oddcnt = 0;
        for (int i = 0; i < 26; i++) {
            if (a[i] % 2 != 0) {
                oddcnt++; 
            }
        }
    k -= oddcnt ;
    
    if( k < 0){no;}
      
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
