#include <bits/stdc++.h>
using namespace std;
 
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
        ll n;
        cin >> n;
        vll a;
        a.push_back(n);
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1; 
            }
            a.push_back(n);
        }
 
        for (ll i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    
    return 0;
}