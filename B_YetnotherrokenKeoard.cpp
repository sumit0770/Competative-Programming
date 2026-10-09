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
  string s ;
  cin>>s ;
  int n = s.size() ;
  vector<int> big ;
  vector<int> small ;
  vector<pair<char  , bool > > v ;
  for (int  i = 0; i < n; i++)
  {
    v[i].first = s[i] ;
    v[i].second =true ;
  }
  
  for (int i = 0; i < n; i++) {
     if (s[i] == 'B') {
        big.push_back(i);
     } else if (s[i] == 'b') {
        small.push_back(i);
     }
  }
for (int  i = 0; i < n; i++)
{
 if( s[i] =='B' || s[i] == 'b'){
      if( s[i] =='B'){
        s[big.back()] = false ;
        big.pop() ;
      }
      else{
        s[small.back()] = false ;
        small.pop() ;
      }
 }
}
for (auto ch :s )
{
  if( ch.second  = false  || ch =='B' || ch =='b'){
    continue; 
  }
  else{
    cout<<ch;
  }
}
cout<<endl;




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
