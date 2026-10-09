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
  int n ;
  cin>>n ;
  vll a ;
  int ans = 0;
  for(int i = 0; i < n ; i++)
  {
    int x;
    cin>>x ;
    a.push_back(x);
    if( x == 2 ) ans++;
  }
if( ans % 2 !=  0 ){ cout<<-1<<endl; return  ;}
if( ans == 0 ) { cout<<1 <<endl; return  ;}
else{
    ll tep = ans / 2 ;
    for(int i = 0; i < n ; i++){
       // if( tep ==  0 ){cout<<i + 1 <<endl; return ;}
        if( a[i] == 2 ){
            tep--;
        }
        if( tep == 0 ){cout<<i + 1 <<endl; return ;}
    }
}

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
