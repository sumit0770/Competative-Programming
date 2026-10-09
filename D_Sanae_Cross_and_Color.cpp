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
 void solve(){
        ll n;
        cin >> n;
        vector<pair<ll, ll>> p(n);
        vector<bool> x(n, 0);
        vector<ll> pc(n, 0);
        vector<ll> pmin(n, LLONG_MAX), pmax(n, LLONG_MIN);
        vector<ll> smin(n, LLONG_MAX), smax(n, LLONG_MIN);
        for (ll i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
            p[i].first--;
            p[i].second--;
            pmin[p[i].first] = min(pmin[p[i].first], p[i].second);
            pmax[p[i].first] = max(pmax[p[i].first], p[i].second);
            smin[p[i].first] = min(smin[p[i].first], p[i].second);
            smax[p[i].first] = max(smax[p[i].first], p[i].second);
            pc[p[i].second] = 1;
            x[p[i].first] = 1;
        }
        for (ll i = 1; i < n; i++) {
            pmin[i] = min(pmin[i], pmin[i - 1]);
            pmax[i] = max(pmax[i], pmax[i - 1]);
            pc[i] += pc[i - 1];
        }
        for (ll i = n - 2; i >= 0; i--) {
            smin[i] = min(smin[i], smin[i + 1]);
            smax[i] = max(smax[i], smax[i + 1]);
        }
        ll ans = 0;
        vector<ll> v;
        for (ll i = 0; i < n; i++) {
            if (x[i]) v.push_back(i);
        }
        for (ll i = 0; i < (ll)v.size() - 1; i++) {
            ll h = min(pmax[v[i]], smax[v[i + 1]]);
            ll l = max(pmin[v[i]], smin[v[i + 1]]);
            if (h > l) ans += pc[h] - pc[l];
        }
        cout << ans << '\n';


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
