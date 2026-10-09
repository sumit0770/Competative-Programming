#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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


vector<int> ds ;
void countPrimes(int n) {
    
      
            vector<bool> prime( n  +  1 ,  true  ) ; 
            prime[0]  = 0; 
            prime[1] = 0;
          
            for(int i =2  ; i <=  n ; i++ ){
                if( prime[i]){
                   ds.push_back(i) ;
                    for(int j = i* i ; j <= n ; j+= i ){
                        prime[j] = false ;
                    }
                }
            }
           
        
    }


  void solve(){
     countPrimes(500000) ;
     int n ;
     cin>>n ;
     cout<<ds[n-1]<<endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t =1  ;
  
  while( t-- ){
     solve() ;
 }
}
