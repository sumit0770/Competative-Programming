#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
    int n, m;
    cin >> n >> m;
    vll a(n);
    vll b(m);
    vll c(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    // int l = 0, r = 0;
    // int k = 0;
    // while (l < a.size() || r < b.size()) {
    //     if (r == b.size() || (l < a.size() && a[l] == b[r])) {
    //         k++;
    //         l++;  
    //     } else {
            
    //         r++;
    //     }
    //    // k++;
    // }

    // cout<<k<<endl;
    
int j = 0; 
for(int i = 0; i < n ;i++){
       while( a[i] == b[j] && i <  n ){
        
       }
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}