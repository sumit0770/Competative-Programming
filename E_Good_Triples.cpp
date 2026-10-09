#include<bits/stdc++.h>
using namespace std;

// Sumit Sangale 
// IIITLucknow

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
  string s ;
  cin>>s ;
  ll n= s.size() ;

  vll a( 30, 0 )  ;

  for(int i = 0; i <= 9 ; i++){
    for(int j = 0; j <= 9 ; j++){
        for(int k = 0; k <= 9 ; k++){
            a[i + j + k]++ ;
        }
    }
  }
  ll ans = 1  ;
 for(auto ch : s ){
    ans *= (ll)( a[ch-'0']) ;
 }
cout<<ans <<endl;

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
