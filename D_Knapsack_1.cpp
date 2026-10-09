#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll km(vll &wt, vll &val, vector<vll> &t, ll n, ll w)
{

    // if (n == 0 || w == 0)
    // {
    //     return 0;
    // }
    // if (t[n][w] != -1)
    // {
    //     return t[n][w];
    // }

    if (wt[n - 1] <= w)
    {

        return t[n][w] = max(
                   val[n - 1] + t[n-1][w- wt[n-1]] , //km(wt, val, t, n - 1, w - wt[n - 1]),
              t[n-1][w]  ); //    km(wt, val, t, n - 1, w));
    }
    else
    {

        return t[n-1][w] ;
    }
}

ll knapsac_recursion(vll &wt, vll &val, ll n, ll w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n - 1] <= w)
    {
        return max(val[n - 1] + knapsac_recursion(wt, val, n - 1, w - wt[n - 1]),
                   knapsac_recursion(wt, val, n - 1, w));
    }
    else
    {
        return knapsac_recursion(wt, val, n - 1, w);
    }
}

void solve()
{
    ll n, w;
    cin >> n >> w;
    vector<vll> t(n + 2 , vll(w + 2 ));
    vll wt(n), val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    // ll temp = knapsac_recursion(wt, val, n, w);
    // ll temp2 = km(wt, val, t, n, w);
    // //cout << temp2 << endl;
   
for( int i = 0; i < n + 1 ; i++){
    for( int j = 0; j < w + 1 ; j++)
    if( i == 0 || j == 0){
        t[i][j] = 0;
    }
    
}
   for( int i = 1; i < n + 1 ; i++){
   for( int j = 1 ; j < w + 1 ; j++){
      if( wt[i-1] <= j ){
        t[i][j] = max(
            val[i - 1] + t[i - 1][j - wt[i - 1]],
            t[i - 1][j] 
        );
      }
      else{
        t[i][j] = t[i - 1][j]; 
      }
   }
}

cout<<t[n][w]<<endl;
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
