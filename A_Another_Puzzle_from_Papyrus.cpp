#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b)
{
    return (a == 0) ? b : gcd(b % a, a);
}
// DSU Class for Union-Find (Disjoint Set Union)
class DSU
{
    vector<int> rank, parent, size;

public:
    DSU(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findUpar(int node)
    {
        if (node == parent[node])
            return node;

        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulu = findUpar(u);
        int ulv = findUpar(v);

        if (ulu == ulv)
            return;

        if (rank[ulu] < rank[ulv])
        {
            parent[ulu] = ulv;
        }
        else if (rank[ulv] < rank[ulu])
        {
            parent[ulv] = ulu;
        }
        else
        {
            parent[ulv] = ulu;
            rank[ulu]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int ulu = findUpar(u);
        int ulv = findUpar(v);
        if (ulu == ulv)
            return;
        if (size[ulu] < size[ulv])
        {
            parent[ulu] = ulv;
            size[ulv] += size[ulu];
        }
        else
        {
            parent[ulv] = ulu;
            size[ulu] += size[ulv];
        }
    }
};

void solve()
{
    int n, c;
    cin >> n >> c;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ans = 0;
    bool flg = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
          {  flg = true;}
        else
          ans +=( a[i] - b[i]) ;
    }
    if (flg)
    {
        flg = false;
         ans = 0;
        ans += c ;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                flg = true;
            else 
                ans += (a[i] - b[i]);
        }
    }

   if( flg ) cout<< -1<<endl; 
   else cout<< ans<<endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
