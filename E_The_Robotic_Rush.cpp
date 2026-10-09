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

        vector<int> r(n);
        for (auto &x : r) cin >> x;

        vector<int> l(m);
        for (auto &x : l) cin >> x;

        vector<bool> d(n);

        map<int, vector<int>> mp;

        string s;
        cin >> s;

        sort(l.begin(), l.end());

        for (int i = 0; i < n; i++) {

            if (l[0] < r[i]) {
                int v = r[i] - (*(lower_bound(l.begin(), l.end(), r[i]) - 1));
                mp[-v].push_back(i);
            }

            if (l[m - 1] > r[i]) {
                int v = *lower_bound(l.begin(), l.end(), r[i]) - r[i];
                mp[v].push_back(i);
            }
        }

        int p = 0, a = n;

        for (auto &c : s) {

            if (c == 'L') p--;
            else p++;

            for (auto &i : mp[p]) {

                if (d[i]) continue;

                d[i] = 1;
                a--;
            }

            mp[p].clear();

            cout << a << " ";
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
