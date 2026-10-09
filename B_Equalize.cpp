#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
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

  int n  ;
  cin>>n;
  vll a(n) ;
  for (int  i = 0; i < n; i++)
  {
   cin>>a[i] ;
  }
  set<int> s ;
  s.insert( a.begin(), a.end()) ;

//   int mini = INT_MAX ;
//     for(auto ch : s){
//         mini = min(mini, ch) ;
//     }
vll b ;
for(auto ch : s){
    b.push_back(ch) ;
}

// for(auto x:b){
//     cout<<x<<" " ;
// }
// cout<<endl;

int l =  0;
int ans = 0;
for (int  r  = 0; r  < b.size(); r++)
{
    if( b[r] - b[l] > n  - 1){
        l++ ;
    }
    ans = max(ans, r - l + 1) ;
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
