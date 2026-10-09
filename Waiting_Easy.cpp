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
 ll n ; cin>>n ; 
 vll a(n); 
 //ll maxi = 0;
 ll ans =0;
 for(int i = 0; i < n ; i++){
    cin>>a[i] ;
 }
ll maxi = a[0] ;
 vll prefix( n + 1, 0 ) ;
 for(int i =  1; i < n ; i++){
   prefix[i] =max( prefix[i - 1] ,a[i]) ; 
 }
int cnt = 1 ;
int err = 0; 
int num = a[0] ;
prefix[0] = a[0] ;
 for(int i = 1 ; i < n ; i++){
    if( prefix[i] != prefix[ i -1 ]) {
      cnt= 1 ;
      num = a[i] ;
      err= max( cnt , err ) ;
    }
    else{
        cnt++;
    }
 }


 for(int i = 1  ; i < n ; i++){
    maxi = max( maxi , a[i]) ; 

    ans+= (maxi - a[i] );
 }
 cout<<ans - (1LL * (err)*num )<<endl;

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
