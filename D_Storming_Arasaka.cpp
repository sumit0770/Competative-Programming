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
const int MAX = 1000000;
vector<int> spf(MAX + 1);

void sieve() {
    for (int i = 0; i <= MAX; i++)
        spf[i] = i;

    for (int i = 2; i * i <= MAX; i++) {
        if (spf[i] == i) {        
            for (int j = i * i; j <= MAX; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
void solve() {
    int n;
    cin >> n;

    int distinct = 0;
    int total = 0;

    while (n > 1) {
        int p = spf[n];
        distinct++;

        while (n % p == 0) {
            n /= p;
            total++;
        }
    }

    cout << total + distinct - 1 << '\n';
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
