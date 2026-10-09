#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    vector<pair<char, int> > mp(26);
    for (int i = 0; i < 26; i++) {
        mp[i] = make_pair(char('a' + i), 0);
    }

    string ans = "";
    for (ll i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) { 
            if (mp[j].second == a[i]) { 
                ans += mp[j].first;     
                mp[j].second++;       
                break;
            }
        }
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
