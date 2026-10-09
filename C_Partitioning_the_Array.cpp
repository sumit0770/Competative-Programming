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
  ll n ; cin>>n ;
  vll a(n) ; for(int i = 0; i < n ; i++) cin>>a[i];
   ll ans = 0;
  for(int k = 1 ; k <= n ; k++){
   
    if( n % k == 0 )
       {  
        ll gc= 0 ; 
        for(int i =0 ; i + k < n ;i++)
            gc = gcd( gc , abs(a[i + k ] - a[i])) ;
        
          if( gc != 1 ) ans++;
  }
  }
cout<<ans<<endl;

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
