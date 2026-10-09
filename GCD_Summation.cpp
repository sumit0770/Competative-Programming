#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXP = 3e6 + 5;
vector<int> primes;
bitset<MAXP> is_composite;

void sieve() {
    is_composite[0] = is_composite[1] = 1;
    for (int i = 2; i * i < MAXP; ++i) {
        if (!is_composite[i]) {
            for (int j = i * i; j < MAXP; j += i)
                is_composite[j] = 1;
        }
    }
    for (int i = 2; i < MAXP; ++i) {
        if (!is_composite[i])
            primes.push_back(i);
    }
}

void solve() {
    int n, k;
    cin >> n >> k;

    if (k < n - 1) {
        cout << -1 << '\n';
        return;
    }

    if (k == n - 1) {
        vector< pair<int, int> > ans;
        for (int i = 1; i <= n; ++i) {
            ans.push_back(make_pair(i, i));
        }
        for (int i = 0; i < ans.size(); ++i)
          ll temp = ans[i].second;
            cout << temp - 1  << " ";
        cout << '\n';
        return;
    }

    ll l = k - (n - 2); 
    vector<int> res;
    int i = 0;

    
    while ((int)res.size() < n - 2) {
        if (l % primes[i] != 0)
            res.push_back(primes[i]);
        ++i;
    }
   ll temp2 = 2 * l ;
    res.push_back(l);
    res.push_back(temp2); 


   vector< pair<int, int> > ap;
    for (int i = 0; i < res.size(); i++) {
        ap.push_back(make_pair(res[i], i + 1));
    }
    for (int i = 0; i < ap.size(); i++) {
        int x = ap[i].first;
        cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    sieve(); 

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
