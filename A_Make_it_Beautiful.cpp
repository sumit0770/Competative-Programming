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
  int n; cin>>n ;
vll a(n) ;
for(int i = 0; i < n ; i++) cin>>a[i] ;
sort(a.begin() , a.end()) ;
if( a[0] == a[n -1 ]) {
    no ;
    return ;
}

for(int i = 0; i< n -1 ;i++){
    if( a[i] != a[i  + 1 ] && i > 0 ) ;

    {
swap(a[0] , a[i  + 1 ]);
    }
}
yes;
for(auto ch: a ){
    cout<<ch<<" " ;
}cout<<endl;


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
