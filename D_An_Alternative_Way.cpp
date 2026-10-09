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



const ll md = 998244353;
const int mx = 200005;

ll pw(ll a, ll b) {
    ll r = 1;

    while (b) {
        if (b & 1) r = r * a % md;
        a = a * a % md;
        b >>= 1;
    }

    return r;
}

 void solve(){
 
    vector<pair<int, ll>> f(mx), iv(mx);

    f[0] = {0, 1};

    for (int i = 1; i < mx; i++)
        f[i] = {i, f[i - 1].second * i % md};

    iv[mx - 1] = {mx - 1, pw(f[mx - 1].second, md - 2)};

    for (int i = mx - 2; i >= 0; i--)
        iv[i] = {i, iv[i + 1].second * (i + 1) % md};

    unordered_map<int, ll> fm, im;

    for (auto p : f)
        fm[p.first] = p.second;

    for (auto p : iv)
        im[p.first] = p.second;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n <= 1) {
            cout << 0 << '\n';
            continue;
        }

        vector<pair<int, int>> v;
        set<int> s;

        for (int x = 3; x <= 2 * n - 1; x++) {
            int m;

            if (x <= n + 1)
                m = n;
            else
                m = 2 * n - x + 1;

            v.push_back({x, m});
            s.insert(m);
        }

        ll nf = fm[n];

        unordered_map<int, ll> mp;

        for (int m : s)
            mp[m] = nf * im[m] % md;

        ll ans = 0;

        for (auto p : v) {
            int m = p.second;

            ll less = mp[m];
            ll ge = (nf - less + md) % md;

            ans = (ans + ge) % md;
        }

        cout << ans << '\n';
    }

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
