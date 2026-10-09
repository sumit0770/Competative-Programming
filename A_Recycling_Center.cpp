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
 void solve(){
int n, k  ;
cin>>n>>k ;vll a(n) ; for(int i = 0; i < n ; i++) cin>>a[i] ;

long long temp = 0;
sort(a.rbegin() , a.rend()) ;
 //int ans =  0;
for( long long  it : a ){
   if( it *(1LL << temp) <= c ){
    temp++;
   }
   
     
   
}

cout<<n  - temp<<endl;
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
