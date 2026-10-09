#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vector<vi> pf;

void sieve(int n, vi &sp) {
    sp.resize(n + 1);
    pf.assign(n + 1, {});

    for (int i = 1; i <= n; i++) sp[i] = i;

    for (int i = 2; i * i <= n; i++) {
        if (sp[i] == i) {
            for (int j = i * i; j <= n; j += i)
                if (sp[j] == j) sp[j] = i;
        }
    }

    for (int i = 2; i <= n; i++) {
        int x = i;
        while (x > 1) {
            int p = sp[x];
            pf[i].push_back(p);
            while (x % p == 0) x /= p;
        }
    }
}

void dfs( )
void solve() {
    int n, q;
    cin >> n >> q;

    vi sp;
    sieve(n, sp);

    vector<int> owner(n + 1, 0);
    vector<int> on(n + 1, 0);

    while (q--) {
        char op;
        int x;
        cin >> op >> x;

        if (op == '+') {
            if (on[x]) {
                cout << "Already on\n";
                continue;
            }

            int con = 0;
  
            for (int p : pf[x]) {
                if (owner[p]) {
                    con = owner[p];
                    break;
                }
            }

            if (con) {
                cout << "Conflict with " << con << "\n";
            } else {
                on[x] = 1;
                for (int p : pf[x]) owner[p] = x;
                cout << "Success\n";
            }
        } else {
            if (!on[x]) {
                cout << "Already off\n";
                continue;
            }

            on[x] = 0;
            for (int p : pf[x]) owner[p] = 0;
            cout << "Success\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}