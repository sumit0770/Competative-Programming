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
ll subk(vll &a , ll k ){
    ll n = a.size() ;
    int l = 0 ; 
    int r = 0; 
    ll sum = 0; 
    ll _ = 0; 

    while ( r   < n ){
      sum += a[r] ;
        while( sum > k  && l <=r ){
        sum -= a[l] ;
        l++;
        }
        if( sum == k){
            _++;
        }

     r++;
    }
      return _ ;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
}
void ip(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   ll x ;
   cin>>x ;
   a.push_back(x)  ;
  }
}
void op2(  vll &a ){


for(auto &value : a ){
   cout<<value<<" " ;
}
cout<<endl;
}


void op(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   
   cout<<a[i]<< " " ;
  }
  cout<<endl;
}
 void solve(){
  ll n ; cin>> n ;
  vll a(n) ; for( int i = 0; i < n ; i++) cin>> a[i] ;

  vll pp ( n + 1 , 0 ) , pn( n + 1 , 0 ) ;

  for( int i = 0; i < n ; i++){
    pp[i + 1 ] = pp[ i]  + ( a[i] > 0 ?abs(a[i])  : 0 ) ;
  }
   for( int i = n- 1 ; i >= 0 ; i--){
    pn[i  ] = pn[i + 1]  + ( a[i] < 0 ? abs(a[i]) : 0 ) ;
  }
  ll maxi = INT_MIN ;

  for( int i = 0; i <=n ; i++){
    ll temp  =  pp[i] + pn[i]  ;
    maxi = max( maxi , temp ) ;
  }

cout<<maxi<<endl;

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
