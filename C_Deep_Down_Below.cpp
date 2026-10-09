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
bool feasible(ll x, const vector<pair<ll,ll>>& caves) {
    for (auto [b,k] : caves) {
        if (x <= b) return false; 
        x += k;
    }
    return true;
}

 void solve(){
 int n ; cin>>n ;
 vector<pll> v ;

 for(int i = 0; i < n ; i++){
    int k ; cin>>k ;
     ll sum = LLONG_MIN;
     for(int j = 0; j < k ; j++){
        ll x ; cin>>x ;
    sum = max( sum , x - j ) ;
     }
v.push_back({sum , k }) ;

 }

 sort(v.begin() , v.end() ) ;
//   ll crsum = 0; 
//   ll temp = LLONG_MIN ;
//  for(auto &[a , b] :  v ){
//     temp = max( temp , a - crsum);
//     crsum += b ;
//  }
// cout<< temp + 1 <<endl;
 
    ll low = 0, high = 1e18;
        while (low < high) {
            ll mid = low + (high - low) / 2;
            if (feasible(mid,  v )) high = mid;
            else low = mid + 1;
        }

        cout << low << "\n";


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
