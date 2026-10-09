#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    reverse(s.begin(), s.end());
    bool flg = true;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[(i + 1) % n]) {
            flg = false;
            break;
        }
    }

    if(flg) {
        if(n % 2 == 0) cout << -1 << endl;
        else cout << (n / 2) + 1 << endl;
        return;
    }
    reverse(s.begin(), s.end());
    vi pos;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[(i + 1) % n]) pos.push_back(i);
    }

    vector<pair<int, int>> v;
    unordered_map<int, int> m;
    int sz = pos.size(), ans = 0;

    for(int j = 0; j < sz; j++) {
        v.push_back({pos[j], pos[(j + 1) % sz]});
    }

    for(auto &p : v) {
        int st = p.first, ed = p.second, ln;
        if(st < ed) ln = ed - st;
        else ln = n - st + ed;

       
        if(m.find(ln) == m.end()) m[ln] = (ln - 1) / 2;
        ans = max(ans, m[ln]);
    }

    cout << ans + 1 << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}