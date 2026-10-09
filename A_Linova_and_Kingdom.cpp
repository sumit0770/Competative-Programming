#include<bits/stdc++.h>
using namespace std;
//Sumit Sangale
//IIITL
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
vector<vector<int>> adj ;

void dfs( int node , int parent , int depth, vector<int>& dep  ){

    bool leaf = true ;

    for( auto c : adj[node]){
        if ( c != parent ){
            leaf = false ;
            dfs( c , node , depth + 1 , dep) ;
        }
    }

    if( leaf ){
        dep.push_back( depth ) ;
    }
}

 void solve(){
  int n , k ; cin>>n>>k ;
  adj.resize(n + 1 );
    for(int  i = 0 ; i< n ;i++){
   int u , v ;cin>>u>>v ;
  adj[u].push_back(v) ;
  adj[v].push_back(u) ;

  }

vector<int>dep ;

  dfs( 1 , -1 ,  0 , dep);
 sort( dep.rbegin() , dep.rend() ) ;
 int ans = 0;

 for(int i = 0 ; i < min((int)dep.size() ,(int ) k ) ; i++){
  ans += dep[i] ;

 }
    cout << ans <<endl;
    adj.clear() ;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 1  ;
  //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
