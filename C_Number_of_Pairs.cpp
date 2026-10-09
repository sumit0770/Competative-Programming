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
  int n , p , q  ;
  cin>>n>>p>>q ;
  vll a(n) ; 

  for( int i = 0  ; i < n ; i++)cin>>a[i] ; 
   sort(a.begin() , a.end()) ;
   

ll cnt = 0;
    int l = 0; 
    int r = n -1 ;
    while( l < r){
       int  sum = a[l] + a[r] ;
        if( sum >= p )
        {
            r--;
        }
    else{
            cnt+= (r-l)     ;
            l++;
        }
       
    }

ll cnt1 = 0; 
int x   = 0; 
int y =  n - 1 ;
while( x < y){
    int sum = a[x] + a[y] ;
    if( sum > q){
        y--;
    }
    else{
        cnt1 += (y - x)    ;
        x++;
    }
}
cout<<cnt1  -  cnt<<endl;
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
