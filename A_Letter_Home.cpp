#include<bits/stdc++.h>
using namespace std;
//Sumit Sangale
//IIITL
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
 void solve(){
 int n  , m ; cin>> n>> m  ; 
 vll a(n) ; for(int i = 0; i < n ; i++) cin>>a[i] ;

 int mini = a[0] ; 
 int maxi = a[ n -1] ; 
 int temp = maxi - mini ;
 ll ans = min ( abs( m - mini)  , abs(maxi - m ) ) ;
 cout << ans + temp <<endl;


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
