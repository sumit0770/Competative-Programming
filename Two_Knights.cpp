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
ll sum( int k ){
    ll a= k*k ;
    ll b= a * ( a -1 ) ;
    ll c = b / 2 ;
    ll d = 4 * (k - 2) * ( k -1 ) ;
 
    return  c - d ;
}
 void solve(){
   int n ; cin>>n ;
   
   for(int i = 1 ; i<= n ;i++){
     cout << sum(i) <<endl;
   }
 
  
 
}
 
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t  =  1 ;
  
  while( t-- ){
     solve() ;
 }
}


// This code calculates the number of valid placements for two knights on an n x n chessboard such that they do not attack each other.
// It defines a function `sum` that computes the number of valid placements for knights based on the size of the board.
// The main function reads an integer n and prints the result for each size from 1 to n.
// The output is the number of valid placements for two knights for each board size from 1 to n.