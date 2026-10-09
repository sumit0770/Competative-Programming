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
int n , m , k ;
vector<int> a ;


bool check(int m ){
for(int i = 0; i  < n ; i++){
    int movesleft =  k ;
    int maxreq = m ;
  for(int j = i ; j < n ;j++){
   if(a[j] >= maxreq) return true ;
   movesleft -= (maxreq - a[j]) ;
   maxreq--;
   if( movesleft < 0 ){
    break;
   }  
 }
}

return false ;
}


int binary(){
    int lo  = 0; 
    int hi = 1e9 + 1 ;
    while( lo < hi ){
        int mid = (lo + hi + 1 ) / 2 ;
        if(check(mid)){
            lo = mid ;
        }else{
            hi = mid  - 1 ;
        }
    }
    return lo;
}
 void solve(){
 cin>>n>>k ;
 a.clear() ;
 for(int i = 0; i < n ;i++){
    int x ;
    cin>>x ;
    a.push_back(x) ;
 }
cout<<binary() << endl;


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
