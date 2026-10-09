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
 int n, m, k;
        cin >> n >> m >> k;

        vector<int> vec(n); for (auto &x: vec) cin >> x;
        vector<int> original_vec(n); for (int i = 0; i < n; i++) original_vec[i] = vec[i];
        vector<int> last_element_update(n, -1);
        int last_reset = -1;
        int reset_count = 0;
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            a--;

            if (last_element_update[a] < last_reset) vec[a] = original_vec[a];
            vec[a] += b;
            if (vec[a] > k) {
                last_reset = i;
                reset_count++;
                vec[a] = original_vec[a];
            }
            last_element_update[a] = i;
        }

        ll sum = 0;
        for (int i = 0; i < n; i++) {

            if (last_element_update[i] < last_reset) vec[i] = original_vec[i];
            cout << vec[i] << " ";
        }
        cout << "\n";



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
