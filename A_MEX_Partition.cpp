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
  set<int> s ;

  for(int i =  0  ; i < n ; i++){
    int sp ;
    cin>>sp ;
    s.insert(sp) ;
  } 

  for(int i = 0; i < s.size() ; i++){
    if( s.find(i) == s.end() ){
        cout<<i<<endl;
        return ;
    }
  }
 cout<<s.size()<<endl;
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
