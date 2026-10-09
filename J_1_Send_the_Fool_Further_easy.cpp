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
 
   ll  dfs( int node  , vector<vector<pair<int, int>>>&adj , int par  ){
    ll ans = 0;
    for ( auto &[child , wt ] : adj[node ]) {
         if( child == par ) continue ;
         ans = max( ans ,( wt + dfs( child ,adj , node   )));
    }
    return ans ;
    
  }
 void solve(){
 int n ; cin>>n ; 
 vector<vector<pair<int, int>>> adj( n +1 ) ; 
 for(int i = 0; i < n - 1 ; i++){
    int u , v , cs ; 
    cin>>u>>v>>cs ; 
    adj[u].push_back({ v , cs }) ;
    adj[v].push_back({ u , cs }) ;
 }

 //vector<int> vis( n + 1 , 0 ) ;

 cout<< dfs( 0 , adj , -1  ) ;  
  
 

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t= 1  ;
  //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
