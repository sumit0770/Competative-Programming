#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void ip(ll &n, vll &a)
{
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

void op2(vll &a)
{
    for (auto &value : a)
    {
        cout << value << " ";
    }
    cout << endl;
}

void op(ll &n, vll &a)
{
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vll a(n);
    vll b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (n == 1)
    {
        if (a[0] > m)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
        }
        return;
    }

    int sum = 0;
    int cnt = 0;
    int l = 0;
    int r = 0;
    while (r < n)
    {
        if (r > 0 && b[r - 1] % b[r] != 0)
        {
            l = r;
            sum = 0;
        }
        sum += a[r];
        while (sum > m)
        {
            sum -= a[l];
            l++;
        }
        if (sum <= m)
        {
            cnt = max(cnt, r - l + 1);
        }
        r++;
    }
    cout << cnt << endl;
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
    return 0;
}