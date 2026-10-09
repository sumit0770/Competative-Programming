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
    int h = 0; 
    ll sum = 0; 
    ll _ = 0; 

    while ( h   < n ){
      sum += a[h] ;
        while( sum > k  && l <=h ){
        sum -= a[l] ;
        l++;
        }
        if( sum == k){
            _++;
        }

     h++;
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
 ll n ;cin>>n;
 char _ ;cin>>_ ;

 string __ ; cin>>__;

 __ += __;

 ll l = 0; ll h =2 *n  - 1 ;
  ll ans  = -1 ;
  ll g = -1  ;
 for( int  i = 2*n  -1 ; i >= 0 ; i-- ){
    if( __[i] == 'g'){
    g = i ;
    }
    if( __[i] == _){
        if( g != -1){
        ans = max(ans , g -   i ) ;
        }
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
