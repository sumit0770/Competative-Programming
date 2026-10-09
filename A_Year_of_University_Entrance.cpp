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
  int n ;cin>>n ;
  vi a(n) ; for(int i=0;i<n;i++) cin>>a[i] ;

  sort(all(a)) ;
  cout<<a[(( n + 1 )/ 2)  - 1 ]<<endl;


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t  = 1 ;
 // cin>>t ;
  while( t-- ){
     solve() ;
 }
}
