#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
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
  int n;
  string s; cin>>s;

  int cnt =  0; 
  int cnt1 = 0;
  cnt  = count(s.begin() , s.end() , '2') ;
  cnt1 = count(s.begin() , s.end() , '3') ;

   int sum = 0;
   for(auto ch :s){
    sum +=  (ch -'0') ;
   }
   if( sum % 9 == 0){
    yes;
    return ;
   }
   cnt1 = min( cnt1  +1  , 10) ;
   cnt = min( cnt + 1  , 10 ) ;

   for (int  i = 0; i <cnt1; i++)
   {
      for (int  j = 0 ; j<cnt; j++)
      {
      if(( 6  *i  + 2 * j  + sum ) % 9 == 0 ){
        yes;
        return ;
      } 
      }
      
   }
   
   no;
    
     







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
