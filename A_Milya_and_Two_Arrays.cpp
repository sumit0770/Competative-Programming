 // Includes all standard libraries
#include <vector>         // For using vector
#include <iostream>       // For input/output
#include <algorithm>      // For using `any_of()`
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);

        for (ll &x : arr) cin >> x;

        // If any element in the first (n-k+1) range is not 1, print 1
        // if (any_of(arr.begin(), arr.begin() + (n - k + 1), [](ll x) { return x != 1; })) {
        //     cout << 1 << endl;
        //     continue;
        // }
        for(int i = 0; i < n - k + 1 ;i++){
            if(arr[i] != 1){
                cout<<1<<endl;
                break;
            }
        }

        // If any element in the first (n-k) range is not 2, print 2
        // if (any_of(arr.begin(), arr.begin() + (n - k), [](ll x) { return x != 2; })) {
        //     cout << 2 << endl;
        //     continue;
        // }
        if( k == 2){
            for (int  i = 0; i < n - k ; i++)
            {
              if(arr[i+1] != 2){
                  cout<<2<<endl;
                  break;
              }
            }
            
        }

        // Otherwise, print (k/2 + 1)
        cout << (k / 2 + 1) << endl;
    }
}
