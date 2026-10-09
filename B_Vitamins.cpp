#include <bits/stdc++.h>
using namespace std;
// Sumit Sangale
// IIITL
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

//int vit = 63;
void solve()
{
    int n;
    cin >> n;
     const ll INF = 1e18;  
    vector<vector<ll>> dp( 1020  , vector<ll>( 8 , INF ));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        string s;
        cin >> s;
         int mask = 0;

        for (int i = 0; i < s.size(); i++)
        {
            mask = mask | 1 <<  (s[i] - 'A');
        }

        for (int m = 0; m < 8; m++)
        {
      dp[i + 1][m | mask] = min(dp[i + 1][m | mask], dp[i][m] + c);
      dp[i + 1][m] = min(dp[i + 1][m], dp[i][m]);
           
        }
    }
    if (dp[n][7] >= INF  )
        dp[n][7] = -1;

    cout << dp[n][7] << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
