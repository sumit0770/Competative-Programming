#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;

// Function to compute gcd
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

// Function to compute lcm
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        ll n, x, y;
        cin >> n >> x >> y;
        
        
        ll xy_lcm = lcm(x, y);

        
        ll count_x = n / x;
        ll count_y = n / y;
        ll count_xy = n / xy_lcm;

       
        ll sum_x = x * (count_x * (count_x + 1) / 2);
        ll sum_y = y * (count_y * (count_y + 1) / 2);
        ll sum_xy = xy_lcm * (count_xy * (count_xy + 1) / 2);
         
      
       ll id_sum = (n * (n + 1) / 2)  - (count_x * ( count_x + 1 ) /2 ) ;
       ll id_sub = ( count_y * ( count_y + 1) /2 ) ;
        ll result = id_sum - id_sub;

        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
