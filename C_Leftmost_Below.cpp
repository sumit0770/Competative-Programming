#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<unordered_map>
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
int n ;cin>>n ;
vll b ;
for(int i = 0; i < n ; i++){
    ll x ; cin>>x ;
    b.push_back(x) ;}

int mini = b[0] ;
for(auto xh :b){
    if( xh >= 2 * mini) { no ; return ;}
    mini = min(mini,(int) xh);
}
yes ;

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
