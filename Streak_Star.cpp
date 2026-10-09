#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n, m;
    cin >> n >> m;
    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

   
    int maxLenWithoutMod = 1, currentLen = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            currentLen++;
        } else {
            maxLenWithoutMod = max(maxLenWithoutMod, currentLen);
            currentLen = 1;
        }
    }
    maxLenWithoutMod = max(maxLenWithoutMod, currentLen); 

    
    int maxLenWithMod = 1;
    int l = 0;
    bool modified = false; 

    for (int r = 1; r < n; r++) {
        if (a[r] >= a[r - 1]) {
           
        } else if (!modified) {
            
            ll original = a[r];
            a[r] *= m;

            if (a[r] >= a[r - 1]) {
                modified = true;
            } else {
               
                a[r] = original;
                l = r;
                modified = false; 
            }
        } else {
            
            l = r;
            modified = false; 
        }

        maxLenWithMod = max(maxLenWithMod, r - l + 1);
    }

   
    cout  << maxLenWithMod << endl;
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
