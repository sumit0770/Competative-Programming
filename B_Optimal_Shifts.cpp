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
  string s ; cin>>s ;

  vector<ll> cnt{1} ; 

  for(int i = 1 ; i < n ; i++)
    if( s[i] == s[i - 1 ])
        cnt.back()++;
    else 
       cnt.push_back(1) ;


ll  ans = 0;

if( s[0] == '0')
   for(int i =0; i < cnt.size() ; i+=2 ){
       ans = max( ans , cnt[i] ) ;
   }
else 
   for(int i= 1 ; i < cnt.size() ; i+=2 ){
       ans = max( ans , cnt[i] ) ;
   }


if( s[0] =='0' && s.back() =='0' && cnt.size() >= 2 )
   ans = max( ans , cnt[0] + cnt.back()) ;

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
