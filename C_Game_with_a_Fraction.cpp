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
    vector<pair<long long, long long>> v(1);
    if (!(cin >> v[0].first >> v[0].second)) return;

    long long a = v[0].first, b = v[0].second;
    unordered_map<string, bool> cache;
    
   
    bool c1 = (a == 0 && b == 0);
    bool c2 = (a * 3 == b * 2);
    bool c3 = (a * 3 < b * 2);

    bool flag ;
   
    if (c1 || c2) {
        flag  = false;
    } else if (c3) {
        flag  = true;
    } else {
        flag  = (a >= b);
    }

    
    cache["res"] = flag ;
    cout << (cache["res"] ? "Alice\n" : "Bob\n");
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
