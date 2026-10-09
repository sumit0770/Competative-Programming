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

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n;
        cin >> n;
        vll a(n);
        unordered_map<ll, ll> mp;

       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        for (int i = 0; i < n; i++) {
            mp[a[i]] = 1;
        }
        
        ll mex = 0;
        for (int i = 0; i < 1e5 + 5; i++) {
            if (mp[i] != 1) {
                mex = i;
                break;
            }
        }
        
      //  mp.clear();
        
       
        if (mex == 0) {
            cout << 2 << endl;
            cout << 1 << " " << 1 << endl;
            cout << 2 << " " << n << endl;
            continue;
        }
        mp.clear() ;
        ll l = 0;
        vector<pair<ll, ll> > ans;
        
       
        for (int i = 0; i < n; i++) {
            if (a[i] < mex) {
                mp[a[i]] = 1;
            } if (mp.size() == mex) {
                ans.push_back(make_pair(l + 1, i + 1));
                l = i + 1; 
                mp.clear();
            }
        }
        
        
        if (!ans.empty()) {
            ans[ans.size() - 1].second = n;
        }
        
       
        if (ans.size() < 2) {
            cout << -1 << endl;
        } else {
            cout << ans.size() << endl;
            for (const auto &p : ans) {
                cout << p.first << " " << p.second << endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
