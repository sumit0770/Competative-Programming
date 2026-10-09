#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
    
//      _         _   _                
//     / \  _   _| |_| |__   ___  _ __ 
//    / _ \| | | | __| '_ \ / _ \| '__|
//   / ___ \ |_| | |_| | | | (_) | |   
//  /_/   \_\__,_|\__|_| |_|\___/|_|   
                                    
 
// / ___| _   _ _ __ ___ (_) |_  / ___|  __ _ _ __   __ _  __ _| | ___ 
// \___ \| | | | '_ ` _ \| | __| \___ \ / _` | '_ \ / _` |/ _` | |/ _ \
//  ___) | |_| | | | | | | | |_   ___) | (_| | | | | (_| | (_| | |  __/
// |____/ \__,_|_| |_| |_|_|\__| |____/ \__,_|_| |_|\__, |\__,_|_|\___|
//                                                  |___/              
    
   
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

 pair<int , int > precomputeSumSub(int n,  int extra , int x , int y  ){
  
   int sum = 0; 
   int sub = 0 ;
      for( int i =  0;  i <n ; i++){
        if(i % x == 0 && i  % extra != 0  ){
         sum++; 
        }
        else if(i % y  == 0 && i  % extra != 0)
        sub++;
       }

       return make_pair(sum , sub) ;
}

void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
       ll n , x , y ;
       cin>>n>>x>>y ;
       ll extra = n /( lcm( x , y )) ;
       ll sum = n/ x  ;
       ll sub =  n / y ; 
       sum -= extra  ;
       sub -= extra ;
  
    // pair<int , int > b =   precomputeSumSub(n, extra , x , y ) ;
        ll id = n - sum  ; 
        ll id_sum = (n * (n + 1) / 2)  - (id * ( id + 1 ) /2 ) ;
     ll id_sub = ( sub * (sub + 1) /2 ) ;
        cout<<id_sum - id_sub<<endl;
 
         

        }

        
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}