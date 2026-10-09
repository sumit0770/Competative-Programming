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
 ll n ;
 cin>>n ;


 vll a(n) ;
 for(int i = 0;i < n ; i++) cin>>a[i] ;
   

 for(int i = 1; i < n   ; i++){
    if(abs( a[i] - a[i  - 1 ])  >= 2 ){
        yes ;
        cout<<i<<" "<<i +  1 <<endl;
        return ;
    }

 }
 no;
 

      
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
