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
 int  n ; cin>>n ;
 vll a ;
 int cnt  = 0, ans = 0;
 for(int i = 0; i  <n ; i++){
    int c; cin>>c ;
    if( c== 0  )ans++ ;
    else if( c == -1 ) cnt++;
 }

 if( cnt % 2 ) cout<<ans+ 2 <<endl;
 else cout<<ans<<endl;

 



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
