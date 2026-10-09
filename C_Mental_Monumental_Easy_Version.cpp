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
 int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        multiset<int> st(a.begin(), a.end());

        int l = 0, r = n + 1;

        while (l < r) {
            int md = (l + r) / 2;

            vector<int> rem;
            bool ok = 1;

            for (int i = md - 1; i >= 0; i--) {

                auto it = st.find(i);

                if (it != st.end()) {
                    rem.push_back(i);
                    st.erase(it);
                }
                else {
                    int x = *st.rbegin();

                    if (x < 2 * i + 1) {
                        ok = 0;
                        break;
                    }

                    rem.push_back(x);

                    auto p = st.find(x);
                    st.erase(p);
                }
            }

            for (auto x : rem) st.insert(x);

            if (ok) l = md + 1;
            else r = md;
        }

        cout << l - 1 << endl;


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
