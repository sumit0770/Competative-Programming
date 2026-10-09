#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long res = 0;
    int th = (int)sqrt(n);

    
    for (int k = 1; k <= th; ++k) {
        for (int r = 0; r < n; ++r) {
            long long rv = a[r];
            if (1LL * k * rv > r) continue;
            int l = r - (int)(1LL * k * rv);
            if (l >= 0 && a[l] == k) res++;
        }
    }

    for (int k = 1; k <= th; ++k) {
        for (int l = 0; l < n; ++l) {
            long long lv = a[l];
            if (lv <= th) continue;
            long long j = lv * k;
            long long rll = l + j;
            if (rll >= n) continue;
            int r = (int)rll;
            if (a[r] == k) res++;
        }
    }

    cout << res << '\n';
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
