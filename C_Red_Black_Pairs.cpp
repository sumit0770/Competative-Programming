#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
const int  INF = 1e9 + 7 ;
 void solve(){
int n;
  cin >> n;
  vector<string> d(2);
  cin >> d[0] >> d[1];
  vector<int> dp(n + 1, INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    dp[i + 1] = min(dp[i + 1], dp[i] + (d[0][i] != d[1][i]));
    if (i + 1 < n){
      dp[i + 2] = min(dp[i + 2], dp[i] + (d[0][i] != d[0][i + 1]) + (d[1][i] != d[1][i + 1]));
    }
  }

  cout << dp[n] << '\n';


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
