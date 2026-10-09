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
int a[200005];
map<int,int> mp;
 void solve(){
            int n;
        cin >> n;

        for (int i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + n + 1);

        swap(a[1], a[n]);

        sort(a + 2, a + n + 1);

        vector<int> v1, v2;

        for (int i = 2; i <= n; i++) {
            if (!v1.empty() && v1.back() == a[i])
                v2.push_back(a[i]);
            else
                v1.push_back(a[i]);
        }

        int t = 1;

        for (auto x : v1) a[++t] = x;
        for (auto x : v2) a[++t] = x;

        ll ans = 0;

        mp.clear();

        int nw = 0, mx = 0;

        for (int i = 1; i <= n; i++) {
            mp[a[i]]++;

            mx = max(mx, a[i]);

            while (mp[nw]) nw++;

            ans += 1LL * mx + nw;
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
