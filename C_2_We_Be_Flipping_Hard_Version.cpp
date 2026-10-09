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
    for (int &x : a) cin >> x;

    vector<ll> pre(n), suf(n + 1);
    pre[0] = abs(a[0]);
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + abs(a[i]);
    
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = suf[i + 1] + a[i];

    ll best = suf[0];
    int idx = -1;
    for (int i = 1; i < n; i++){
        if (a[i] > 0){
            ll score = pre[i - 1] + suf[i + 1] - a[i];
            if (score > best){
                best = score;
                idx = i;
            }
        }
    }

    if (idx == -1){
        cout << "0\n";
        return;
    }

    vector<int> ans;
    for (int i = idx - 1; i >= 0; i--){
        if (ans.size() & 1)
            a[i] = -a[i];
        if (a[i] > 0)
            ans.push_back(i);
    }
    ans.push_back(idx);

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << " \n"[i == ans.size() - 1];


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
