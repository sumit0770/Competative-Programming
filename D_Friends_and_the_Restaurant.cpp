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
  int n;
  cin>>n;
    vector<int> a ;
    vector<int> b ;
    for (int  i = 0; i < n; i++)
    {
        int x ;
        cin>>x ;
        a.push_back(x) ;
    }
    for (int  i = 0; i < n; i++)
    {
        int x ;
        cin>>x ;
        b.push_back(x) ;
    }
    vll c ;
    for (int  i = 0; i < n; i++)
    {
        c.push_back(b[i] - a[i]) ;
    }
    sort(c.begin(), c.end()) ;

int r = n - 1; 
int l = 0 ;
int ans = 0;


while( r > l){
 if( c[r] + c[l]  >=  0){
    ans++ ;
    r--;
    l++ ;
  }
  else l++;
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
