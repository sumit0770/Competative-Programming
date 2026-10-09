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
    int n;
    cin >> n;

    vector<int> a(n), e, o;

    for (int &x : a)
    {
        cin >> x;
        (x & 1 ? o : e).push_back(x);
    }

    int emn = 1e9, emx = -1e9;
    int omn = 1e9, omx = -1e9;

    for (int x : e)
    {
        emn = min(emn, x);
        emx = max(emx, x);
    }

    for (int x : o)
    {
        omn = min(omn, x);
        omx = max(omx, x);
    }

    bool ok = 1;

    if (e.size() > 1)
    {

        int mx = e[0];

        for (int i = 1; i < (int)e.size(); i++)
        {

            if (mx > e[i])
            {

                if (omn > e[i] && omx < mx)
                {
                    ok = 0;
                    break;
                }
            }
            else
                mx = e[i];
        }
    }

    if (ok && o.size() > 1)
    {

        int mx = o[0];

        for (int i = 1; i < (int)o.size(); i++)
        {

            if (mx > o[i])
            {

                if (emn > o[i] && emx < mx)
                {
                    ok = 0;
                    break;
                }
            }
            else
                mx = o[i];
        }
    }

    cout << (ok ? "YES\n" : "NO\n");
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
