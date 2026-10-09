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
  int n , m ; cin>>n>>m ;
  vll a(n) ; for(int i = 0; i < n ; i++ ) cin>>a[i] ;
 if( n > m ){
    cout << 0 <<endl; 
    return ; 
 }
 int ans = 1  ;
  for(int i = 0 ; i < n ; i++ ){
     for(int  j =  i+ 1 ; j < n ; j++){
      ans = ((ans % m ) * (abs( a[i] - a[j] ) % m ) % m) ;
     }
  }
  cout<<ans<<endl;


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 1  ;
  //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
