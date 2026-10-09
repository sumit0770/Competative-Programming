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

  vector<int> dp(n + 1 ,  0);
  dp[0] = 1 ;
//    for(int i = 1 ; i <= n ;i++){
//     for(int j = 1 ; j<= 6 ;j++){
//         if( i - j >= 0 )
//          {  dp[i] += dp[i - j ] ;}
//     }
//    }

for(int i = 0; i < n ; i++){
    for(int j = 1  ; j <= 6 ; j++){
      
            dp[i + j] += dp[i]; 
        
    }
}
cout<<dp[n]<<endl;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t  = 1 ;
  
  while( t-- ){
     solve() ;
 }
}
