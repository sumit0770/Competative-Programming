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
 const int MOD = 998244353;
void up(int &a , int b ){
    a = (a * 1LL * b ) % MOD ;
}
 void solve(){
string s ;
cin>>s ;
int n = s.size() ;
int k = s.size() ;
int ans = 1 ;
int l = 0; 
while( l < n ){
    int r =l + 1 ;
    while( r < n && s[r]==s[l]) r++;

  up( ans , r- l) ;
  l= r ;
  --k;

}
for(int i = 1  ; i<=k ;i++){
    up(ans , i); 
}
cout<<k<<" "<<ans<<endl;

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
