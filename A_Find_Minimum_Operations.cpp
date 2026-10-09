#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ifind( int n, int k){
  if( k == 1 )return n ;
  int ans = 0; 
  while( n >  0){
     ans += n %  k ;
     n /=k ;
  }
  return ans  ;
}
void solve() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        ll n, k;
        cin >> n >> k;
        int ans =  ifind( n , k );
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
