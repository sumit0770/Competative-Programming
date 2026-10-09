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
ll a;

ll mk(int x, int l) {

    if (l <= 0)
        return -1;

    ll v = 0;

    for (int i = 0; i < l; i++) {

        if (v > (LLONG_MAX - x) / 10)
            return -1;

        v = v * 10 + x;
    }

    return v;
}

void solve() {

    int n;
    cin >> a >> n;

    vector<int> d(n);

    unordered_map<int,int> mp;

    for (int i = 0; i < n; i++) {
        cin >> d[i];
        mp[d[i]] = 1;
    }

    sort(d.begin(), d.end());

    vector<pair<int,int>> vp;

    for (int i = 0; i < n; i++)
        vp.push_back({d[i], i});

    string s = to_string(a);

    int l = s.size();

    ll an = LLONG_MAX;

    if (l > 1) {

        ll v = mk(vp[1].first, l - 1);

        if (v != -1)
            an = min(an, abs(a - v));
    }
    else {

        if (mp[0])
            an = min(an, a);
    }

    int fd = (vp[0].first == 0 && n > 1)
             ? vp[1].first
             : vp[0].first;

    if (fd != 0) {

        ll v = fd;

        bool ok = 1;

        for (int i = 0; i < l; i++) {

            if (v > (LLONG_MAX - vp[0].first) / 10) {
                ok = 0;
                break;
            }

            v = v * 10 + vp[0].first;
        }

        if (ok)
            an = min(an, abs(a - v));
    }

    ll pre = 0;

    bool f = 1;

    for (int i = 0; i < l; i++) {

        int t = s[i] - '0';

        for (auto &p : vp) {

            int x = p.first;

            if (pre == 0 && x == 0 && l > 1)
                continue;

            if (x > t) {

                ll tmp = pre * 10 + x;

                bool ok = 1;

                for (int k = i + 1; k < l; k++) {

                    if (tmp > (LLONG_MAX - vp[0].first) / 10) {
                        ok = 0;
                        break;
                    }

                    tmp = tmp * 10 + vp[0].first;
                }

                if (ok)
                    an = min(an, abs(a - tmp));
            }

            else if (x < t) {

                ll tmp = pre * 10 + x;

                bool ok = 1;

                for (int k = i + 1; k < l; k++) {

                    if (tmp > (LLONG_MAX - vp[1].first) / 10) {
                        ok = 0;
                        break;
                    }

                    tmp = tmp * 10 + vp[1].first;
                }

                if (ok)
                    an = min(an, abs(a - tmp));
            }
        }

        if (mp[t]) {

            if (pre > (LLONG_MAX - t) / 10) {
                f = 0;
                break;
            }

            pre = pre * 10 + t;
        }
        else {
            f = 0;
            break;
        }
    }

    if (f)
        an = min(an, abs(a - pre));

    cout << an << '\n';
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
