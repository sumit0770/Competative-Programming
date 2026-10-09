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
    int n, k; 
    cin >> n >> k;

    vll a(n), f;
    cin >> a[0];

    int cnt = 1;

    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] == a[i - 1]) cnt++;
        else{
            f.push_back(cnt); 
            cnt = 1;
        }
    }
    f.push_back(cnt);

    sort(f.begin(), f.end());

    int m = f.size();
    vll suffix(m + 1, 0);

    for(int i = m - 1; i >= 0; i--){
        suffix[i] = suffix[i + 1] + f[i]; 
    }

    int ans = 0;

    for(int i = 0; i < m; i++){
        int len = m - i;

        if(i == 0 || f[i] != f[i - 1]){
            if((k - suffix[i]) % len == 0){ 
                int N = (k - suffix[i]) / len;
                if(f[i] + N >= 1){
                    ans++;
                }
            }
        }
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
