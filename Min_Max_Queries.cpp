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
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        v[i] = {i, x};
    }

    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        mp[i] = v[i].second;
    }

    while (q--)
    {

        int t;
        cin >> t;

        if (t == 1)
        {

            int u, x;
            cin >> u >> x;

            mp[u] = x;
            v[u] = {u, x};
        }
        else
        {

            int l, r;
            cin >> l >> r;

            int len = r - l + 1;

            if (len == 1)
            {
                cout << mp[l] << endl;
            }
            else if (len % 2 == 0)
            {

                int m = (l + r) / 2;

                cout << max(mp[m], mp[m + 1]) << endl;
            }
            else
            {

                int m = (l + r) / 2;

                int a = min(mp[m - 1], mp[m]);
                int b = min(mp[m], mp[m + 1]);

                cout << max(a, b) << endl;
            }
        }
    }
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
