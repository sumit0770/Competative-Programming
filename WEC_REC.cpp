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
  int n , m , l ; 
  cin>>n>>m>>l ; 
    map<int , int> mp ;
  vll a(n) ; for(int i=0;i<n;i++) {
    cin>>a[i] ;
    mp[a[i]]++ ;
  }
 // sort( all(a) ) ;
  
 vector<pii> vp ; 
 for(auto it: mp){
    vp.push_back({it.first ,it.second }) ;
 }

 sort( vp.rbegin() , vp.rend()) ;
 int ans =0;
 for(int i = 0; i <min( l , (int)vp.size()) ; i++){
    ans+= vp[i].second  ;}
    ans = min(ans , m) ;
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
