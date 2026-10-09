#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
 void solve(){
  int n , k; cin>>n>>k; 
  vll a(n) ; 
  for(int i = 0; i < n ; i++)
       cin>>a[i] ;
 
   int sb ; cin>>sb ;
   sb--;
   int x = a[sb] ;

   int lft = 0 , rht = 0;

   for(int i = 0, flp = 0; i <=sb ;i++ ){
       if( flp) 
         a[i] ^=1 ;
       
       if( a[i] != x ){
         lft++;
         flp^= 1 ;
          a[i] ^=1 ;}
   }
   for(int i = n - 1, flp = 0; i >= sb ;i--){
       if( flp) 
         a[i] ^=1 ;
       
       if( a[i] != x ){
         rht++;
         flp^= 1 ;
          a[i] ^=1 ;}
   }

   cout<<max( lft , rht)<<endl;



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
