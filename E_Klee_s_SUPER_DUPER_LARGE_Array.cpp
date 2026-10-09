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

ll sum( ll  l , ll r , ll   k ){


  ll sum =( ( r  + 1) * r ) /2   - (( l * ( l -  1)) /2 ) + k * ( r - l + 1) ;
return sum ;
}
 void solve(){
  ll   n , k ;
  cin>>n>>k;
   
 ll start = 0; 
 ll end = n - 1  ;
 ll ans= LLONG_MAX ;
 while( start <= end){
    ll mid = ( start + end ) /2  ;
    ll x  = sum( 0 ,mid , k ) ;
    ll y = sum ( mid + 1 ,n -1  , k ) ;
    if( x== y){
        cout<<0<<endl;
        return ;
    }
    else if( y >= x  ){
   start = mid + 1 ;
   ans = min( ans , abs( x - y )) ;
    }
    else{
        end = mid - 1 ;
        ans = min( ans , abs(x - y )) ;
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
