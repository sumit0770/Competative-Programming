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


  
 void dfs( ll node , vector<vector<ll>> &adj , ll par, vector<ll> &len ){
     for( auto &it : adj[node]){
        if( par !=  it){
          len[it] = len[node] + 1 ; 
          dfs( it , adj , node , len) ;
        }  
     }
    }

 void solve(){
   ll n , x ; cin>>n >> x ;
  vector<vector<ll>> adj( n+ 1 ) ;
   ll ans = 0;
//   if( x == 1 ) {
//     cout<<0<<endl; 
//     return ; 
//   }
  vector<ll> al( n + 1,  -1  ),bo(n + 1 , -1) ; 
  
  
  for(int i = 0; i < n; i++){
     ll x , y ; cin>>x>>y;
     adj[x].push_back(y) ;
     adj[y].push_back(x) ;
  }

  al[1] = 0; 
  bo[x] = 0;
  dfs( 1 , adj , -1  , al ) ;
  dfs( x , adj , -1 , bo ) ;


  for(int i = 0 ; i <= n ; i++){
    if( bo[i] < al[i]) ans = max( ans , al[i]) ;
  }

//  for( auto it : al ){
//     cout<<it<<" " ;
//  }
//  cout<<endl;

//   for( auto it :  bo ){
//     cout<<it<<" " ;
//  }
//  cout<<endl;

  cout<<ans * 2 <<endl;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t =  1  ;
 // cin>>t ;
  while( t-- ){
     solve() ;
 }
}
