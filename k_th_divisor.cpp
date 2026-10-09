#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MAXN = 1000000;


vector<vector<int> > divs(MAXN + 1);


void precompute() {
    for (int i = 1; i <= MAXN; i++) {
        for (int j = i; j <= MAXN; j += i) {
            divs[j].push_back(i); 
        }
    }
}

void solve() {
    int n, k;
    cin >> n >> k;

   
    precompute();

    
    vi a = divs[n];
    
  
    if (k > a.size()) {
        cout << -1 << endl;
    } else {
        cout << a[k - 1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    solve();
}
