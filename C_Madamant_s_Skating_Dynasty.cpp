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
//DSU Class for Union-Find (Disjoint Set Union)
class DSU {
    vector<int> rank, parent , size;

public:
    DSU(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize( n + 1 , 1 );

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUpar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulu = findUpar(u);
        int ulv = findUpar(v);

        if (ulu == ulv)
            return;

        if (rank[ulu] < rank[ulv]) {
            parent[ulu] = ulv;
        }
        else if (rank[ulv] < rank[ulu]) {
            parent[ulv] = ulu;
        }
        else {
            parent[ulv] = ulu;
            rank[ulu]++;
        }
    }
    void unionBySize( int u , int v ){
         int ulu = findUpar(u);
         int ulv = findUpar(v);
         if( ulu == ulv ) return ;
            if( size[ulu] < size[ulv] ){
                parent[ulu] = ulv ;
                size[ulv] += size[ulu] ;
            }
            else{
                parent[ulv] = ulu ;
                size[ulu] += size[ulv] ;
            }
    }

};

ll MOD = 998244353 ;
ll modPow(ll a, ll b) {
    ll r = 1;
    while (b) {
        if (b & 1)
        {   r = r * a % MOD;}
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}

void solve() {
    int n;
    cin >> n;

    vector<pair<ll, int>> v(n);
    unordered_map<ll, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
        mp[v[i].first]++;
    }

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end());

   ll w = 1;
    for (int i = 1; i < n; i++)
        w = w * i % MOD;

    vector<ll> pf(n + 1);
    for (int i = 0; i < n; i++)
        pf[i + 1] = (pf[i] + v[i].first) % MOD;


   ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ll cnt = n - i - 1;
        ll sg = (pf[n] - pf[i + 1] + MOD) % MOD;
        ll cur = (sg - cnt * (v[i].first % MOD)) % MOD;
        if (cur < 0)
           { cur += MOD;}

        ll iv = modPow(cnt, MOD - 2);

        cur = cur * w % MOD;
        cur = cur * iv % MOD;

        ans += cur;
        if (ans >= MOD){
            ans -= MOD;}
    }

    cout << ans << endl;
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
