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

const int MOD = 998244353;
const int MAX = 200005;

ll fact[MAX], invFact[MAX];

ll power(ll base, ll exp)
{
    ll res = 1;
    base %= MOD;

    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % MOD;

        base = (base * base) % MOD;
        exp /= 2;
    }

    return res;
}

ll modInverse(ll n)
{
    return power(n, MOD - 2);
}

void precompute()
{
    fact[0] = 1;
    invFact[0] = 1;

    for (int i = 1; i < MAX; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    invFact[MAX - 1] = modInverse(fact[MAX - 1]);

    for (int i = MAX - 2; i >= 1; i--)
    {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;

    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, ll>> groups;

    unordered_map<int, int> groupIndex;

    int maxGroup = 0;

    for (int k = 0; (1LL << k) <= n; ++k)
    {
        ll start = 1LL << k;
        ll end = min((ll)n, (1LL << (k + 1)) - 1);

        int count = end - start + 1;

        groupIndex[k] = groups.size();
        groups.push_back({count, 0});

        maxGroup = max(maxGroup, count);
    }

    ll totalSubsets = power(2, n);
    ll ans = 0;

    for (int x = 1; x <= maxGroup; ++x)
    {

        ll productLess = 1;

        for (auto &group : groups)
        {

            int count = group.first;

            if (x - 1 <= count)
            {
                group.second =
                    (group.second + nCr(count, x - 1)) % MOD;
            }

            productLess =
                (productLess * group.second) % MOD;
        }

        ll ways = (totalSubsets - productLess + MOD) % MOD;

        ans = (ans + ways) % MOD;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}