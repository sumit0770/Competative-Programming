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
 void solve(){
int n, m, k;
    if (!(cin >> n >> m >> k)) return; 

    vector<vector<int>> grp(n + 1);
    for (int i = 0; i < m; i++) 
    {
        int u, v;
        cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    set<tuple<int, int, int>> fb;
    for (int i = 0; i < k; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        fb.insert({a, b, c});
    }

   
    queue<pair<int, int>> q;
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, -1));
    vector<vector<int>> parent(n + 1, vector<int>(n + 1, 0));

    
    q.push({0, 1});
    dist[0][1] = 0;

    int enode = -1; 

    while (!q.empty())
    {
        auto [u, v] = q.front();
        q.pop();

        if (v == n) {
            enode = u;
            break; 
        }

        for (int nxt : grp[v])
        {
            if (fb.count({u, v, nxt})) continue; 

            if (dist[v][nxt] == -1) 
            {
                dist[v][nxt] = dist[u][v] + 1;
                parent[v][nxt] = u; 
                q.push({v, nxt});
            }
        }
    }

    if (enode == -1) 
    {
        cout << -1 << endl;
        return;
    }

   
    vector<int> path;
    int cr = enode, par = n;
    
    while (par != 0) 
    {
        path.push_back(par);
        int prev = parent[cr][par];
        par = cr;
        cr = prev;
    }

    reverse(all(path));

    cout << dist[enode][n] <<endl; 
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t  =1  ;
 // cin>>t ;
  while( t-- ){
     solve() ;
 }
}
