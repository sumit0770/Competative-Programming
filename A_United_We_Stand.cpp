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
  int n ; cin>>n;

  vll a(n) ;for(int i = 0; i < n ;i++)cin>>a[i] ;
  sort( a.begin() ,a.end()) ;
  if( a[0] == a[n-1]){
    cout<<-1<<endl;
    return ;
  }

//   for (int  i = 0; i < n; i++)
//   {
//     for(int j = 0; j < n ; j++){
//         if( i == j )continue ;
//         else {

//         }
//     }
//   }
vll b ;
vll c ;
// c.push_back(a[0]) ;
// bool flag= false ;
// for( int i = 1; i < n ; i++){
// if( a[i] == a[i -1]){
//    c.push_back(a[i]) ;
// }
// else if( a[i] != a[i -1]){
//     flag = true ;
// }
// else if(flag){
//     b.push_back(a[i]) ;
// }
// }
c.push_back(a[0]);
for( int i = 1; i < n ; i++){
    if( a[i] == a[0]){
        c.push_back(a[i]) ;
    }
    else{
       b.push_back(a[i]) ;
    }
}
cout<<c.size()<<" "<<b.size()<<endl;
for(auto ch :c) cout<<ch<<" " ;
cout<<endl;
for(auto ch :b) cout<<ch<<" " ;
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
