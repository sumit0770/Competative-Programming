#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int testcases;
    cin >> testcases;
    
    while (testcases--) {
        int n, k;
        cin >> n >> k; 
        vll a(n);
        
       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll sum = 0;
        int cnt = 0;
        
       
        for (int i = 0; i < n; i++) {
            if (sum + a[i] > k) {
                break;
            }
            sum += a[i];
            cnt++;
        }
        
        cout << cnt << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
