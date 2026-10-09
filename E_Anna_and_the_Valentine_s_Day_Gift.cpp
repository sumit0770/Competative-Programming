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
  int n, m;
  cin >> n >> m;
  vi v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int dgsum = 0;
  vi dg(n);
  for (int i = 0; i < n; i++)
  {
    int temp = 0;
    while (v[i] % 10 == 0)
    {
      dg[i]++;
      v[i] /= 10;
      dgsum++;
    }

    while (v[i] > 0)
    {
      dgsum++;

      v[i] /= 10;
    }
  }

  sort(dg.rbegin(), dg.rend());
  ll temp = 0;
  for (int i = 0; i < dg.size(); i += 2)
  {
    dgsum -= dg[i];
  }
  if (dgsum > m)
  {
    cout << "Sasha" << endl;
  }
  else
  {
    cout << "Anna" << endl;
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
