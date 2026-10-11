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



void solve() {
    int n, k;
    cin >> n >> k;

    vll v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    unordered_map<ll, ll> mp;
    int j = 0;

    for (int i = 0; i < n; i++) {
        mp[v[i]]++;

        if (i - j + 1 == k) {
            cout << mp.size() << " ";

            mp[v[j]]--;
            if (mp[v[j]] == 0) {
                mp.erase(v[j]);
            }

            j++;
        }
    }
    cout << endl;
}

//  void solve(){
//  int n , k; cin>>n>>k ; 
//  vll v(n) ;
//  if (n == k ) {cout <<n<<endl;
//  return ;}

//  for(int i = 0; i < n;i++) cin>>v[i] ;

//  //set<int>st ; 

//  unordered_map<ll, ll > mp ;
 


//  int j = 0; 
//    for(int i = 0; i < n ; i++){
//      mp[v[i]]++;
//     if(  i- j  + 1  <  k  ){
//         continue;
//     }
//     else
//    { cout<<mp.size()<<" ";

   
//     if( mp[v[i]] == 1 ) mp.erase(v[i]) ;
//     else  mp[v[i]]--;
//     j++;
   
// }
   
//    }
// }



int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t= 1 ;
 // cin>>t ;
  while( t-- ){
     solve() ;
 }
}
