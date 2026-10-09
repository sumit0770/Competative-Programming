#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

//      _         _   _                
//     / \  _   _| |_| |__   ___  _ __ 
//    / _ \| | | | __| '_ \ / _ \| '__|
//   / ___ \ |_| | |_| | | | (_) | |   
//  /_/   \_\__,_|\__|_| |_|\___/|_|   
                                    
 
// / ___| _   _ _ __ ___ (_) |_  / ___|  __ _ _ __   __ _  __ _| | ___ 
// \___ \| | | | '_ ` _ \| | __| \___ \ / _` | '_ \ / _` |/ _` | |/ _ \
//  ___) | |_| | | | | | | | |_   ___) | (_| | | | | (_| | (_| | |  __/
// |____/ \__,_|_| |_| |_|_|\__| |____/ \__,_|_| |_|\__, |\__,_|_|\___|
//                                                  |___/              
    
   


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}


void inputVector(ll n, vll &a) {
    a.resize(n);
    for (ll &x : a) {
        cin >> x;
    }
}


void outputVector(const vll &a) {
    for (const ll &value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n;
        cin >> n; 
        vll a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        
        ll maxA = *max_element(a.begin(), a.end());
        ll minB = *max_element(b.begin(), b.end());
        
        cout << (maxA + minB) * 2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
