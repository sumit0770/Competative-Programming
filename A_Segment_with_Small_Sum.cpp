
#include <bits/stdc++.h>
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
    ll n, m;
    cin >> n >> m;
    vll a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, sm = 0, rs = LLONG_MAX; 

    for (ll r = 0; r < n; r++)
    {
        sm += a[r];

        while (sm - a[l] >= m) 
        {
            sm -= a[l];
            l++;
        }

        if (sm >= m)
        {
            rs = min(rs, r - l + 1);
        }
    }

    if( rs == LLONG_MAX) {cout<<-1<<endl;}
    else
   { cout <<  rs << endl;}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
