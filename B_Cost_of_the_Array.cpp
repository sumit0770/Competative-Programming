#include <vector>         
#include <iostream>      
#include <algorithm> 
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        if (n == k) {
            for(int i = 1 ;i < n ; i +=2 ){
                if( a[i] != ( i + 1) /2 ){
                    cout<<( i + 1) /2 <<endl;
                    break ;
                }
               if( i == n  )
            }
           
           
        }

        bool f1 = false, f2 = false;
        for (ll i = 0; i < n - k + 1 ; i++) {
            if (a[i] != 1) f1 = true;
           // if (a[i] != 2) f2 = true;
        }
         for (ll i = 0; i < n - k + 2  ; i++) {
           // if (a[i] != 1) f1 = true;
            if (a[i] != 2) f2 = true;
        }

        if (f1) cout << 1 << endl;
        else if (f2) cout << 2 << endl;
        else cout << (k / 2 + 1) << endl;
    }

    return 0;
}
