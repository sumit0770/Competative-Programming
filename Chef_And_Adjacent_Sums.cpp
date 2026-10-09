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

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = a[n - 1] + a[n - 2];

    int i = 0, j = n - 1;
    vi as(n);
    int st = 0;
    while (i <= j)
    {
        if (i == j)
        {
            as[st] = a[i];
            i++;
            j--;
        }
        else
        {
            as[st] = a[j];
            j--;
            st++;
            as[st] = a[i];
            i++ ;
            st++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        int temp = as[i - 1] + as[i];
        if (temp >= ans)
        {
            no;
            return;
        }
    }

    yes;
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