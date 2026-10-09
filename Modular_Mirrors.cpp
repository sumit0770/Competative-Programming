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
        ll m;
        cin >> n >> m;

        if ((n + 1) % 3 != 0) {
            cout << -1 << endl;
           return ;
        }

        vector<pair<int,ll>> v;
        unordered_map<int,ll> mp;

        mp[1] = 1;
        mp[2] = 1;
        mp[3] = 0;
        mp[4] = m - 1;
        mp[5] = m - 1;
        mp[0] = 0;

        for (int i = 1; i <= n; i++) {
            ll val = mp[i % 6];
            v.push_back({i, val});
        }

        for (auto &p : v) {
            cout << p.second << ' ';
        }

        cout << '\n';

  




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
