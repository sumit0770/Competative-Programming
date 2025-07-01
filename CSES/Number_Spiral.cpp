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
  ll x , y  ;
  cin>>y >>x ;
 
  if( y > x ){
    ll add = 0;
    ll ans = ( ( y - 1 ) * ( y - 1 ));
    if( y % 2 != 0){
        add = x ;
    }
    else{
        add = 2 * y  - x ;
    }
    
    cout<< add + ans << endl;
  }
  else{
     ll add = 0;
    ll ans = ( ( x - 1 ) * ( x - 1 ));
    if( x % 2 == 0){
        add = y ;
    }
    else{
        add = 2 * x  - y  ;
    }
    
    cout<< add + ans << endl;
  }
 
 
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


// This code calculates the value at a specific position (x, y) in a number spiral.
// It determines whether y is greater than x and calculates the result based on the parity of x and y.
// The result is printed for each test case, which consists of multiple (x, y) pairs.