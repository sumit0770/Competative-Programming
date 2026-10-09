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
int mat[20][20];
vector<string> g(20), w(20);
int dp[1000000][20];

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> g[i] >> w[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = (g[i] == g[j] || w[i] == w[j]);
        
    

    for (int mask = 0; mask < (1 << n); mask++)
        for (int i = 0; i < n; i++)
            dp[mask][i] = 0;

    
vector<vector<int>> dp(1 << n, vector<int>(n, -1));
for (int i = 0; i < n; i++) {
    dp[1 << i][i] = 1; 
}

int ans = 1;
for (int mask = 1; mask < (1 << n); mask++) {
    for (int i = 0; i < n; i++) {
        if (!(mask & (1 << i))) continue;
        int cur = dp[mask][i];
        if (cur == -1) continue;          

        ans = max(ans, cur);

      
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) continue;
            if (!mat[i][j]) continue;

            int nmask = mask | (1 << j);
            dp[nmask][j] = max(dp[nmask][j], cur + 1);
        }
    }
}
cout << n - ans << endl;

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
