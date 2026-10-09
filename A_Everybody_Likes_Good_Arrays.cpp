#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin>>x ;
        if( x % 2 == 0 ) a[i] = 0;
        else a[i] = 1 ;
    }

   int ans = 0;
    int i = 0;
    while (i < n) {
        int count = 1; 
        while (i + 1 < n && a[i] == a[i + 1]) {
            count++;
            i++;
        }
        ans += count - 1;
        i++;
    }

    cout << ans  << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
