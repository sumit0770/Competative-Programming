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
    int n ;
    cin>>n ;
    string s ;
    cin>>s ;

    ll balance  = 0; 
    ll ans = 0;
    for( int i = 0; i < s.size() ; i++){
       if( s[i] == '('){
              balance++;
       }
       else{
        balance--;
        if( balance < 0 ){
            balance = 0;
            ans++;
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
