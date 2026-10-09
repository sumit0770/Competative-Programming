#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    vector<ll> prefix_sum(n + 1, 0);

  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
    }

   
    ll ans = LLONG_MAX;
    int min_index = 0;

    for (int i = 0; i <= n - k; i++) {
        ll sum = prefix_sum[i + k] - prefix_sum[i];
        if (sum < ans) {
            ans = sum;
            min_index = i + 1; 
        }
    }

    cout << min_index << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
