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


 void solve(){

  string s ; cin>>s ;
  string ans ="" ;
  ans+= s[0] ;
    int n = s.size() ;

   for(int i = 1 ; i < n ; i++){
       if( s[i] == ans[i - 1 ]){
        for(char ch = 'a' ; ch <= 'z' ; ch++){
            if( ch != s[i - 1] ){

                if( i < n - 1 && ch != s[i + 1 ]){
                ans += ch ; 
                break ;
                }
                if( i == n - 1 ){
                    ans += ch ;
                    break ;
                }
            }
            
        }
       }
       else{
        ans += s[i] ;
       }
   }
   cout <<ans <<endl;
   
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t= 1  ;
 //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
