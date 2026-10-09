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
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        vector<pii> par(8), bar(8);
        par[0] = make_pair(xk + a, yk + b);
        par[1] = make_pair(xk + a, yk - b);
        par[2] = make_pair(xk - a, yk + b);
        par[3] = make_pair(xk - a, yk - b);
        par[4] = make_pair(xk + b, yk + a);
        par[5] = make_pair(xk + b, yk - a);
        par[6] = make_pair(xk - b, yk + a);
        par[7] = make_pair(xk - b, yk - a);

        bar[0] = make_pair(xq + a, yq + b);
        bar[1] = make_pair(xq + a, yq - b);
        bar[2] = make_pair(xq - a, yq + b);
        bar[3] = make_pair(xq - a, yq - b);
        bar[4] = make_pair(xq + b, yq + a);
        bar[5] = make_pair(xq + b, yq - a);
        bar[6] = make_pair(xq - b, yq + a);
        bar[7] = make_pair(xq - b, yq - a);

        vector<pii> overlappingPoints;
       
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (par[i] == bar[j]) {
                   
                    if (find(overlappingPoints.begin(), overlappingPoints.end(), par[i]) == overlappingPoints.end()) {
                        overlappingPoints.push_back(par[i]);
                    }
                }
            }
        }

        
        cout << overlappingPoints.size() << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
