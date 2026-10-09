#include<bits/stdc++.h>
using namespace std;

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
ll n , x ; cin>>n>>x ;
  vll a(n);
  for(int i = 0; i < n ; i++){
    cin>>a[i] ;
  }

 ll mid1 = 0 + ( n - 1 ) /3  ;
  ll mid2 = ( n -1 ) - ( n - 1 ) /3 ;

  if( a[mid1] == x ||   a[mid2] == x ) {cout<<0<<endl; return  ;}
  cout<<1<<endl;

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
