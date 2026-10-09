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

void helper( int x, unordered_map<int , int>&di ){
    int i = 2 ;
    while( i * i  <= x ){
        while( x % i == 0 ){
            di[i]++;
            x/= i ;
        }
        i++;
    }
    if(x > 1 ){
        di[x]++;
    }
      
}

 void solve(){
   int n ;
   cin>>n ;
   
   unordered_map<int , int> di;
   
   for(int i = 0; i < n ; i++){
    int x ;
    cin>>x ;
    helper(x , di);
   }

   for(auto ch :di ){
    if( ch.second%n != 0) {
        no; 
        return ;
    }

 }

yes;




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
