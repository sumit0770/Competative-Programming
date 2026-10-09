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
 void solve(){

  int n , k ;cin>>n>>k;
    vll a(n); for(int i = 0; i < n ; i++)cin>>a[i] ;
    ll sum  = 0; 
    for( auto x :a ){
        sum += x ; 
    }

    if( sum % 2 != 0  || (ll)( n * k ) % 2 == 0  ){
      yes ; 
      return ; 
    }
    no ;

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
