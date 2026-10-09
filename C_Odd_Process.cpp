#include<bits/stdc++.h>
using namespace std;
//Sumit Sangale
//IIITL
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
 void solve(){
  int n ; cin>> n ; 
  //int k = n ;
  vll even , odd ; 
  for(int i = 0; i < n ; i++){
    int x ; cin>>x ; 
    if( x % 2 == 0) 
       even.push_back(x) ;
    else
      odd.push_back(x) ;
  }

  sort( even.rbegin() , even.rend() ) ;
  sort( odd.rbegin() , odd.rend() ) ;
//   vll prefix( even.size() + 1 ,  0) ;
//   for(int i = 0; i < even.size() ; i++){
//     prefix[i + 1 ] = prefix[i] + even[i] ;
//   }
 
  if( odd.size() == 0 ){
    for(int k = 1 ; k <= n; k++){
        cout<<0<<" " ; 
    }
    cout<<endl;
    return ;
  }
  ll maxi = *max_element( odd.begin() , odd.end() ) ;
   if( even.size() == 0) {
    for(int k = 1 ; k<= n ; k++){
       if( k % 2 != 0 )
          cout<< maxi<<" " ;
       else 
          cout << 0 <<" " ;
    }
    cout << endl;
    return;
  }

   
 vll prefix( even.size() + 1 ,  0) ;
  for(int i = 0; i < even.size() ; i++){
    prefix[i + 1 ] = prefix[i] + even[i] ;
  }
  for( int k = 1 ; k <= n  ; k++){
      if( k == n  && odd.size() % 2 == 0 ){
        cout<<0 <<" " ;
        continue ;
      }
      if( even.size() >= k - 1 )
          cout<< prefix[  k - 1  ] + maxi <<' ' ;
      else 
         if( ( k - 1 - even.size()) % 2 ){
            cout<< maxi + prefix[even.size() - 1 ]<< " " ;
         }
         else{
            cout<< maxi + prefix[ even.size() ] <<" " ;
         }
    
  }
  cout <<endl;




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
