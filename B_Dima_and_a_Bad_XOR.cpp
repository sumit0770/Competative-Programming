#include<bits/stdc++.h>
using namespace std;
//Sumit Sangale
//IIITL
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
int sz = 5e2 + 10 ;


 void solve(){
    int n , m , ar[sz][sz]  , xr  ;
    ll ans[sz] ; // ( overflow )
cin>>n >> m ; 
for(int i = 0; i < n ; i++){
    for(int j = 0; j < m ; j++){
        cin>>ar[i][j] ;
    }
}

  xr = 0;       
for(int i = 0; i < n ;i++){
    xr ^= ar[i][0] ;
}
 bool flag= true  ;

if( xr == 0 ) {
    flag = false ;
    for(int i = 0; i < n && !flag ; i++){
        for(int j = 0 ; j < m ; j++){
            if( ar[i][j] != ar[i][0]){
                ans[i] = j ; 
                flag = true ; 
                break ;
            }
        }
    }
    if(!flag ) 
   { 
    cout <<"NIE"<<endl;
    return ;}
}
cout <<"TAK"<<endl;
for(int i = 0 ; i < n ; i++){
    cout << ans[i] + 1<<" " ;
}
cout<<endl;




}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 1  ;
 
  while( t-- ){
     solve() ;
 }
}
