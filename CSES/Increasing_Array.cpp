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
 void solve(){
  ll n;
  cin>>n;
  vll a ;
  for(int i = 0; i < n ; i++){
  long long x ;
    cin>>x ;
    a.push_back(x) ;
  }
  long long  ans = 0;
  for(int i  =  1 ; i < n ; i++){
     if( a[i -1 ] >= a[i] ){
        int extra = abs(a[i]   - a[i - 1]);
        a[i] += extra ; 
        ans += extra  ;
     }
     else{
        continue ;
     }
  }
 cout<< ans  <<endl;
 
 
}
 
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 // int t ;
 // cin>>t ;
  int t = 1 ;
  while( t-- ){
     solve() ;
 }
}
// This code reads an integer n and then reads n integers into a vector.
// It calculates the minimum number of operations required to make the array strictly increasing by incrementing elements.
// The operations involve incrementing elements to ensure that each element is greater than the previous one.
// Finally, it outputs the total number of increments made to achieve this condition.