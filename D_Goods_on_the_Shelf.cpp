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
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
 
	auto b = a;
	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());
	for (int i = 0; i < n; i++){
		a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
	}
 
	vector<vector<int>> blocks(n);
	vector<int> cntb(n);
 
	for (int i = 0; i < n; ){
		int j = i;
		while(i < n && a[i] == a[j]){
			i++;
		}
		blocks[a[j]].push_back(i);
		blocks[a[j]].push_back(i - 1);
 
		blocks[a[j]].push_back(j);
		blocks[a[j]].push_back(j - 1);
		cntb[a[j]]++;
	}
 
	auto check = [&](int x, int y) {
		if (x < 0 || x >= n || y < 0 || y >= n){
			return 0;
		}
		swap(a[x], a[y]);
		vector<int> cnt(n);
		for (int i = 0; i < n;){
			int j = i;
			while(i < n && a[i] == a[j]){
				i++;
			}
			cnt[a[j]]++;
		}
		swap(a[x], a[y]);
		for (int i = 0; i < n; i++){
			if (cnt[i] > 1){
				return 0;
			}
		}
		return 1;
	};
 
	for (int i = 0; i < n; i++){
		if (cntb[i] > 1){
			if (cntb[i] > 3){
				cout << "NO\n";
				return;
			}
			bool ok = 0;
			sort(blocks[i].begin(), blocks[i].end());
			blocks[i].erase(unique(blocks[i].begin(), blocks[i].end()), blocks[i].end());
			for (int x : blocks[i]){
				for (int y : blocks[i]){
				    if (x < y){
					    ok |= check(x, y);
				    }
				}
			}
			if (!ok){
				cout << "NO\n";
				return;
			}
			break;
		}
	}
 
	cout << "YES\n";


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
