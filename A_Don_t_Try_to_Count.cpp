#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int cnt = 0 ; 
       
        if (a.find(b) != string::npos) {
            cout << cnt << endl;
            continue;
        }

       
        while (cnt < 10  ) { 
            a += a;
            cnt++;

            if (a.find(b) != string::npos) {
                cout << cnt << endl;
                break;
            }
        }

       
        if (cnt >= 10) {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
