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
void solve(){
    int n; 
    cin >> n; 
     
    vector<long long> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    vector<long long> suf_mn(n);
    suf_mn[n - 1] = v[n - 1];
    sum -= suf_mn[n - 1];
    
    for(int i = n - 2; i >= 0; i--) {
        suf_mn[i] = min(suf_mn[i + 1], v[i]);
        sum -= suf_mn[i];
    }

    long long mx = -1, cur = 1;
    for(int i = 1; i < n; i++) {
        if(suf_mn[i] == suf_mn[i - 1]) {
            cur++;
        } else {
            mx = max(mx, cur);
            cur = 1;
        }
    }

    mx = max(mx, cur);
    cout << sum + mx - 1 << "\n"; 
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
