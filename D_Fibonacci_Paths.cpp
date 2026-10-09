#include <bits/stdc++.h>
#define fi first
#define sec second
#define pb push_back
using namespace std;
typedef long long ll;
const int mod = 998244353;
const ll inf = 4e18;
const int maxn = 2e5 + 7;
ll n,m,a[maxn];
vector<pair<ll,pair<ll, ll>>> edge;
	void solve(){
		edge.clear();
		cin >> n >> m;
		vector<map<ll,ll>> dp(n+1);
		for (int i = 1 ; i <= n ; i++){
			cin >> a[i];
		}
		for (int i = 1 ; i <= m ; i++){
			int u, v;
			cin >> u >> v;
			edge.pb({a[u] + a[v],{u , v}});
		}
		sort(edge.rbegin(), edge.rend());
		ll res = 0;
		for (auto it : edge){
			int u = it.sec.fi;
			int v = it.sec.sec;
			ll w = it.fi;
			dp[u][a[v]] = (dp[u][a[v]] + dp[v][w] + 1) % mod;
			res = (res + dp[v][w] + 1) % mod;
		}
		cout << res << endl;
	}
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	freopen("cardgame.in", "r", stdin);
//	freopen("cardgame.out", "w", stdout);
int TT;
//TT = 1;
cin >> TT;
while(TT--){solve();}
}