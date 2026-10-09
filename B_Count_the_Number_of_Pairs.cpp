#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
  int n , k ;
  cin>>n>>k ;
  string s;
  cin>>s ;
  vector<int> big( 26 , 0 ) ; 
  vector<int> small( 26 , 0 ) ;
  for (auto ch : s)
  {
    if( ch >='A' && ch <='Z'){
        big[ch -'A']++;
    }
    else if(ch >='a' && ch <='z'){
        small[ch - 'a']++;
    }
  }
  int ans = 0;
  int burl = 0;
for (int i = 0; i < 26; i++)
{
    burl += min(big[i], small[i]);
    int temp = (abs(small[i] - big[i])) / 2;

    if (k > temp) {
            ans += temp;
            k -= temp;
    } else {
            ans += k;
            k = 0;
    }
}
  cout<<burl + ans <<endl;









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
