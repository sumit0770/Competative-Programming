#include <vector>        // For using the vector container
#include <algorithm>     // For algorithms like sort, find, etc.
#include <numeric>       // For numeric operations like accumulate, gcd, lcm
#include <set>           // For using the set container
#include <map>           // For using the map container
#include <unordered_map> // For using the unordered_map container
#include <queue>         // For using the queue container
#include <stack>         // For using the stack container
#include <deque>         // For using the deque container
#include <string>        // For using the string class
#include <cstring>       // For C-style string functions
#include <cmath>         // For mathematical functions like sqrt, pow, etc.
#include <climits>       // For limits of integral types
#include <cfloat>        // For limits of floating-point types
#include <cassert>       // For using the assert macro
#include <iomanip>
#include <iostream>
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
    int n;
    cin >> n;
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y == 1)
        {
            m2[x]++;
        }
        else
        {
            m1[x]++;
        }
    }
    ll ans = 0;
    for (auto ch : m1)
    {
        if (m2.count(ch.first) > 0)
        {
            ans += (n - 2);
        }
    }
    for (auto ch : m1)
    {
        ll x = ch.first - 1;
        ll y = ch.first + 1;

        if (m2.find(x) != m2.end() && m2.find(y) != m2.end())
        {
            ans++;
        }
    }
    for (auto ch : m2)
    {
        ll x = ch.first - 1;
        ll y = ch.first + 1;

        if (m1.find(x) != m1.end() && m1.find(y) != m1.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
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
