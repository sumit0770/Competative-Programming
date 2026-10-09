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
 ll ans ;
   ll m ; 
   ll n = 1e5 + 7 ;
 vector<vector<int>> adj( n + 1 )  ; 
 void dfs( int node , int par , int k , vector<ll>&c  ){
    if( k > m )return ; 
    int r = 1 ; 
    for(auto it : adj[node]){
        if( it != par ) {  r = 0 ;
     dfs( it , node ,(( k*c[it - 1 ]) + c[it - 1 ] ), c ) ; 
        }
    }
   ans+= r ;
 }

 void solve(){
  cin>>n>>m ;
 // vector<vector<int>> adj( n + 1 )  ; 
  vll c(n) ;for(int i = 0; i < n ; i++)cin>>c[i] ;
adj.clear() ;
  for(int i = 0; i < n - 1 ; i++){
     int x , y ; cin>>x>>y ; 
     adj[x].push_back(y);
     adj[y].push_back(x) ;
  }
 ans = 0;
  dfs(1 , -1 ,  c[0] ,c ) ;
  cout<<ans<<endl;

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t= 1 ;
  //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
