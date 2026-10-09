#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits> // For INT_MAX

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

void solve() {
    string s;
    cin >> s;
    int ans = INT_MAX;
    int n = s.size();

   
    for (char x = 'a'; x <= 'z'; x++) {
        string temp = "";
        
       
        for (char ch : s) {
            temp += (ch == x) ? '1' : '0';
        }

       
        int l = 0, maxi = 0;
        for (int r = 0; r < n; r++) {
            if (temp[r] == '1') {
                maxi = max(maxi, r - l); 
                l = r + 1;  
            }
        }
        maxi = max(maxi, n - l);  

       
        int cnt = 0;
        while (maxi >= 1 ) {
            cnt++;
            maxi = (maxi ) / 2;
        }

        ans = min(ans, cnt);
    }

    cout << ans << endl;
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
